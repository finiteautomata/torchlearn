// src/fisher.cpp
#include <vector>
#include <cmath>

class FisherDiscriminant
{
public:
    void fit(const std::vector<std::vector<double>> &X,
             const std::vector<int> &y)
    {
        // Compute means for each class
        // Compute within-class scatter
        // Compute w = inv(SW) * (mean1 - mean2)
        // Compute threshold
    }

    int predict(const std::vector<double> &x) const
    {
        // Project x onto w, compare with threshold
        return 1;
    }

private:
    std::vector<double> w;
    double threshold;
};