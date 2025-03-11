/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:25:47 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/28 12:14:59 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename f>
int binarySearch(f arr, int low, int high, int x)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}
template <typename f>
f Jacobsthal(f container)
{
    f dp;

    size_t a = 0;
    size_t b = 1;
    bool found = false;
    while(a <= container.size() - 1)
    {
        if (a != 0 && (a != 1 || !found))
            dp.push_back(a);
        if (a == 1)
            found = true;
        size_t next = b + 2 * a;
        a = b;
        b = next;
    }
    return dp;
}

template <typename f>
void fordJhonson(f &main)
{
    f pend;
    if (main.size() == 3)
    {
        pend.push_back(main[2]);
        main.erase(main.begin() + 2);
        if (main[0] > main[1])
        {
            int tmp = main[1];
            main[1] = main[0];
            main[0] = tmp;
        }
    }
    else if (main.size() < 3)
        return;
    else
    {
        f tmp;
        size_t i;
        for (i = 0; i < main.size() - 1; i += 2)
        {
            if (main[i] > main[i + 1])
            {
                pend.push_back(main[i + 1]);
                tmp.push_back(main[i]);
            }
            else
            {
                pend.push_back(main[i]);
                tmp.push_back(main[i + 1]);
            }
        }
        if (i < main.size())
            tmp.push_back(main[i]);
        main.swap(tmp);
    }
    fordJhonson(main);
    f jacobSeq = Jacobsthal(pend);
    std::reverse(pend.begin(), pend.end());
    for (size_t i = 0; i < jacobSeq.size(); i++)
    {
        int index = binarySearch(main, 0, main.size() - 1, pend[jacobSeq[i]]);
        main.insert(main.begin() + index, pend[jacobSeq[i]]);
        pend[jacobSeq[i]] = -1;
    }
    for (size_t i = 0; i < pend.size(); i++)
    {
        if (pend[i] != -1)
        {
            int index = binarySearch(main, 0, main.size() - 1, pend[i]);
            main.insert(main.begin() + index, pend[i]);
        }
    }
}

void pmergeMe(char **av)
{
    std::vector<int> v;
    std::deque<int >d;
    std::cout << "before : ";
    for (int i = 0; av[i]; i++)
    {
        if (std::atoll(av[i]) > 2147483647 ||  std::atoi(av[i]) < 0 )
            throw std::invalid_argument("positive numbers only !");
        v.push_back(std::atoi(av[i]));
        d.push_back(std::atoi(av[i]));
        std::cout << std::atoi(av[i]) << " ";
    }
    std::cout << std::endl;
    std::clock_t start = std::clock();
    fordJhonson(v);
    double duration = static_cast<double> (1000.0 * std::clock() - start) / CLOCKS_PER_SEC;
    std::cout << "after : ";
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Time to process a range of 3000 elements with std::vector : " << duration << " ms"<< std::endl;
    start = std::clock();
    fordJhonson(d);
    duration = static_cast<double> (1000.0 * std::clock() - start) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of 3000 elements with std::deque : " << duration << " ms"<< std::endl;
}