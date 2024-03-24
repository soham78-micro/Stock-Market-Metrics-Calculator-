#include<stdio.h>

int main() {
    // Variables for the metrics
    float market_cap, ent_value, no_shares, pe_ratio, pb_ratio, face_value, div_yield, book_value, cash, debt, promoter_holding, eps, sales_growth, roe, roce, profit_growth;

    // Introduction to the program
    printf("Welcome to the Stock Market Metrics Calculator!\n");

    // Option for user input
    char option;
    printf("Would you like to input data for metrics calculation? (Y/N): ");
    scanf(" %c", &option);

    if (option == 'Y' || option == 'y') {
        // Getting user input for metrics
        printf("\nEnter Market Cap (in Rs): ");
        scanf("%f", &market_cap);
        printf("Enter Enterprise Value (in Rs): ");
        scanf("%f", &ent_value);
        printf("Enter Number of Shares (in crore): ");
        scanf("%f", &no_shares);
        printf("Enter P/E Ratio: ");
        scanf("%f", &pe_ratio);
        printf("Enter P/B Ratio: ");
        scanf("%f", &pb_ratio);
        printf("Enter Face Value (in Rs): ");
        scanf("%f", &face_value);
        printf("Enter Dividend Yield (in percentage): ");
        scanf("%f", &div_yield);
        printf("Enter Book Value (in Rs): ");
        scanf("%f", &book_value);
        printf("Enter Cash (in Rs crore): ");
        scanf("%f", &cash);
        printf("Enter Debt (in Rs crore): ");
        scanf("%f", &debt);
        printf("Enter Promoter Holding (in percentage): ");
        scanf("%f", &promoter_holding);
        printf("Enter EPS (in Rs): ");
        scanf("%f", &eps);
        printf("Enter Sales Growth (in percentage): ");
        scanf("%f", &sales_growth);
        printf("Enter ROE (in percentage): ");
        scanf("%f", &roe);
        printf("Enter ROCE (in percentage): ");
        scanf("%f", &roce);
        printf("Enter Profit Growth (in percentage): ");
        scanf("%f", &profit_growth);
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

    // Explanation about Market Cap
    printf("\nMarket Cap: Rs %.2f Crore\n", market_cap);
    printf("Market Cap represents the total value of a company's outstanding shares in the market.\n");
    printf("Formula: Market Cap = Share Price * Number of Shares\n");

    // Explanation about Enterprise Value
    printf("\nEnterprise Value: Rs %.2f Crore\n", ent_value);
    printf("Enterprise Value is a comprehensive measure of a company's total value.\n");
    printf("Formula: Enterprise Value = Market Cap + Debt - Cash\n");

    // Explanation about Number of Shares
    printf("\nNumber of Shares: %.2f Crore\n", no_shares);
    printf("Number of Shares represents the total count of shares issued by the company.\n");

    // Explanation about P/E Ratio
    printf("\nP/E Ratio: %.2f\n", pe_ratio);
    printf("P/E Ratio measures how much investors are willing to pay per rupee of earnings.\n");
    printf("Formula: P/E Ratio = Share Price / Earnings Per Share (EPS)\n");

    // Explanation about P/B Ratio
    printf("\nP/B Ratio: %.2f\n", pb_ratio);
    printf("P/B Ratio compares the current market price of the stock to its book value per share.\n");
    printf("Formula: P/B Ratio = Market Price per Share / Book Value per Share\n");

    // Explanation about Face Value
    printf("\nFace Value: Rs %.2f\n", face_value);
    printf("Face Value is the nominal value of a stock, used to calculate dividends and voting rights.\n");

    // Explanation about Dividend Yield
    printf("\nDividend Yield: %.2f%%\n", div_yield);
    printf("Dividend Yield represents the annual dividend income per share divided by the stock's price per share.\n");
    printf("Formula: Dividend Yield = (Annual Dividend per Share / Share Price) * 100\n");

    // Explanation about Book Value
    printf("\nBook Value: Rs %.2f\n", book_value);
    printf("Book Value per share represents the value of a company's equity on a per-share basis.\n");
    printf("Formula: Book Value per Share = (Total Assets - Total Liabilities) / Number of Shares\n");

    // Explanation about Cash and Debt
    printf("\nCash: Rs %.2f Crore\n", cash);
    printf("Debt: Rs %.2f Crore\n", debt);
    printf("Cash represents the company's liquidity, while Debt indicates its financial obligations.\n");

    // Explanation about Promoter Holding
    printf("\nPromoter Holding: %.2f%%\n", promoter_holding);
    printf("Promoter Holding refers to the percentage of shares held by the promoters or founders of a company.\n");

    // Explanation about EPS
    printf("\nEPS: Rs %.2f\n", eps);
    printf("EPS measures the company's profitability on a per-share basis.\n");
    printf("Formula: EPS = Net Income / Number of Shares\n");

    // Explanation about Sales Growth
    printf("\nSales Growth: %.2f%%\n", sales_growth);
    printf("Sales Growth indicates the rate at which a company's revenue is increasing over time.\n");

    // Explanation about ROE
    printf("\nROE: %.2f%%\n", roe);
    printf("ROE measures how efficiently a company is generating profits from its shareholders' equity.\n");
    printf("Formula: ROE = (Net Income / Shareholders' Equity) * 100\n");

    // Explanation about ROCE
    printf("\nROCE: %.2f%%\n", roce);
    printf("ROCE evaluates a company's profitability relative to its total capital employed.\n");
    printf("Formula: ROCE = (EBIT / Total Capital Employed) * 100\n");

    // Explanation about Profit Growth
    printf("\nProfit Growth: %.2f%%\n", profit_growth);
    printf("Profit Growth represents the percentage increase in a company's profits over a specific period.\n");

    return 0;
}