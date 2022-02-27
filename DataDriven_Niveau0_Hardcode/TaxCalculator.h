#pragma once

class TaxCalculator
{
public:
	TaxCalculator() = default;

	float ComputeFinalPrice(float price)
	{
		float finalPrice = price;
		finalPrice *= (1 + TPS);
		finalPrice *= (1 + TVQ);
		return finalPrice;
	}

private:
	static constexpr float TPS = 0.05f;
	static constexpr float TVQ = 0.09975f;
};