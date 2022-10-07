import pandas as pd
import yfinance as yf
import plotly.graph_objs as go

apple = yf.Ticker("AAPL")
apple_info = apple.info
#print(apple_info["country"])
apple_share_price_data = apple.history(period = "1mo")
#print(apple_share_price_data)
#print(apple_share_price_data.head())
apple_share_price_data.reset_index(inplace = True)
#print(apple_share_price_data.head())
#apple_share_price_data.plot(x = "Date", y = "Open")
print(apple.dividends)
apple.dividends.plot()