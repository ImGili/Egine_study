/*
 * @Author: ImGili
 * @Description: 
 */
#include <Eigen/Core>
#include <Eigen/Dense>
#include <iostream>
int main()
{
    // first Matrix
    Eigen::MatrixXd m(2,2);
    m(0,0) = 3;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1);
    std::cout << "m = " << std::endl << m << std::endl;

    // Matrix and vector
    Eigen::MatrixXd m_ = Eigen::MatrixXd::Random(3,3);
    m_ = (m_ + Eigen::MatrixXd::Constant(3, 3, 1.2)) * 50;
    std::cout << "m_ = " << std::endl << m_ << std::endl;

    Eigen::VectorXd v(3);
    v << 1, 2, 3;
    std::cout << "v = " << std::endl << v << std::endl;
    std::cout << "m_ * v = " << std::endl << m_*v << std::endl;
}