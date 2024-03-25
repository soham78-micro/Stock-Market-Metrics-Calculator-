#include <stdio.h>
#include <math.h>

int main() {
    // Variables for the metrics
    float market_cap, ent_value, no_shares, pe_ratio, pb_ratio, face_value, div_yield, book_value, cash, debt, promoter_holding, eps, sales_growth, roe, roce, profit_growth;

    // Introduction to the program
    printf("Welcome to the Stock Market Metrics Calculator!\n");
    printf("This program will help you understand how the stock market works and calculate various metrics based on your input.\n\n");

    // Option for user input
    char option;
    printf("Would you like to input data for metrics calculation? (Y/N): ");
    scanf(" %c", &option);

    if (option == 'Y' || option == 'y') {
        // Getting user input for required metrics
        printf("\nEnter Share Price (in Rs): ");
        float share_price;
        scanf("%f", &share_price);

        printf("Enter Number of Shares (in crore): ");
        scanf("%f", &no_shares);

        printf("Enter Net Income (in Rs crore): ");
        float net_income;
        scanf("%f", &net_income);

        printf("Enter Total Assets (in Rs crore): ");
        float total_assets;
        scanf("%f", &total_assets);

        printf("Enter Total Liabilities (in Rs crore): ");
        float total_liabilities;
        scanf("%f", &total_liabilities);

        printf("Enter EBIT (in Rs crore): ");
        float ebit;
        scanf("%f", &ebit);

        printf("Enter Total Capital Employed (in Rs crore): ");
        float total_capital_employed;
        scanf("%f", &total_capital_employed);

        // Calculating derived metrics
        market_cap = share_price * no_shares * 100000000; // Market Cap = Share Price * Number of Shares
        book_value = (total_assets - total_liabilities) / no_shares; // Book Value per Share = (Total Assets - Total Liabilities) / Number of Shares
        eps = net_income / no_shares; // EPS = Net Income / Number of Shares
        pe_ratio = share_price / eps; // P/E Ratio = Share Price / Earnings Per Share (EPS)
        pb_ratio = share_price / book_value; // P/B Ratio = Market Price per Share / Book Value per Share
        roe = (net_income / (total_assets - total_liabilities)) * 100; // ROE = (Net Income / Shareholders' Equity) * 100
        roce = (ebit / total_capital_employed) * 100; // ROCE = (EBIT / Total Capital Employed) * 100
    } else {
        // Default values (metrics of Reliance Industries Ltd.)
        market_cap = 1968971.55;
        ent_value = 2127983.55;
        no_shares = 676.61;
        pe_ratio = 44.07;
        pb_ratio = 3.91;
        face_value = 10;
        div_yield = 0.31;
        book_value = 743.70;
        cash = 56811;
        debt = 215823;
        promoter_holding = 50.3;
        eps = 66.03;
        sales_growth = 25.10;
        roe = 9.05;
        roce = 9.81;
        profit_growth = 13.39;
    }

    // Calculating Enterprise Value
    ent_value = market_cap + debt - cash;

    // Explanation about Market Cap
    printf("\nMarket Cap: Rs %.2f Crore\n", market_cap);
    printf("Market Cap represents the total value of a company's outstanding shares in the market.\n");

    // Explanation about Enterprise Value
    printf("\nEnterprise Value: Rs %.2f Crore\n", ent_value);
    printf("Enterprise Value is a comprehensive measure of a company's total value.\n");
    printf("It considers the company's market capitalization, debt, and cash reserves.\n");

    // Explanation about Number of Shares
    printf("\nNumber of Shares: %.2f Crore\n", no_shares);
    printf("Number of Shares represents the total count of shares issued by the company.\n");

    // Explanation about P/E Ratio
    printf("\nP/E Ratio: %.2f\n", pe_ratio);
    printf("P/E Ratio measures how much investors are willing to pay per rupee of earnings.\n");
    printf("A higher P/E ratio may indicate that the stock is overvalued or has high growth expectations.\n");

    // Explanation about P/B Ratio
    printf("\nP/B Ratio: %.2f\n", pb_ratio);
    printf("P/B Ratio compares the current market price of the stock to its book value per share.\n");
    printf("A P/B ratio below 1 may indicate an undervalued stock, while a ratio above 1 suggests overvaluation.\n");

    // Explanation about Face Value
    printf("\nFace Value: Rs %.2f\n", face_value);
    printf("Face Value is the nominal value of a stock, used to calculate dividends and voting rights.\n");

    // Explanation about Dividend Yield
    printf("\nDividend Yield: %.2f%%\n", div_yield);
    printf("Dividend Yield represents the annual dividend income per share divided by the stock's price per share.\n");
    printf("It measures the cash return an investor can expect from a stock investment.\n");

    // Explanation about Book Value
    printf("\nBook Value: Rs %.2f\n", book_value);
    printf("Book Value per share represents the value of a company's equity on a per-share basis.\n");
    printf("It indicates the net asset value of a company, which can be compared to the market price to assess potential undervaluation or overvaluation.\n");

    // Explanation about Cash and Debt
    printf("\nCash: Rs %.2f Crore\n", cash);
    printf("Debt: Rs %.2f Crore\n", debt);
    printf("Cash represents the company's liquidity, while Debt indicates its financial obligations.\n");
    printf("A high cash balance and low debt levels are generally considered positive factors for a company's financial health.\n");

    // Explanation about Promoter Holding
    printf("\nPromoter Holding: %.2f%%\n", promoter_holding);
    printf("Promoter Holding refers to the percentage of shares held by the promoters or founders of a company.\n");
    printf("A higher promoter holding may indicate better alignment of interests with shareholders.\n");

    // Explanation about EPS
    printf("\nEPS: Rs %.2f\n", eps);
    printf("EPS measures the company's profitability on a per-share basis.\n");
    printf("A higher EPS is generally considered favorable, as it indicates higher earnings for each outstanding share.\n");

    // Explanation about Sales Growth
    printf("\nSales Growth: %.2f%%\n", sales_growth);
    printf("Sales Growth indicates the rate at which a company's revenue is increasing over time.\n");
    printf("Consistent and healthy sales growth is typically a positive sign for a company's performance and potential.\n");

    // Explanation about ROE
    printf("\nROE: %.2f%%\n", roe);
    printf("ROE measures how efficiently a company is generating profits from its shareholders' equity.\n");
    printf("A higher ROE suggests that the company is effectively utilizing its equity to generate profits.\n");

    // Explanation about ROCE
    printf("\nROCE: %.2f%%\n", roce);
    printf("ROCE evaluates a company's profitability relative to its total capital employed.\n");
    printf("A higher ROCE indicates that the company is efficiently utilizing its capital to generate earnings.\n");

    // Explanation about Profit Growth
    printf("\nProfit Growth: %.2f%%\n", profit_growth);
    printf("Profit Growth represents the percentage increase in a company's profits over a specific period.\n");
    printf("Consistent and positive profit growth is generally considered a favorable indicator of a company's performance.\n");

    return 0;
}
