#include "CompletedEventArgs.h"

namespace PhoneDirect3DXamlAppComponent
{
	namespace CommunityControlHelper
	{
		// A callback interface for C# code to implement.
		public interface class ICallback
		{
			// Submit a score completed event.
			event Windows::Foundation::EventHandler<CompletedEventArgs^>^ OnBannerRefreshed;
			event Windows::Foundation::EventHandler<CompletedEventArgs^>^ OnBannerReceivedFailed;
			event Windows::Foundation::EventHandler<CompletedEventArgs^>^ OnPurchased;
			event Windows::Foundation::EventHandler<CompletedEventArgs^>^ OnMethodCallback;

			//share Link with other
			void ShareLinkToOther();
			void Comment();
			void Review();
			void Purchase(Platform::String^ item);
			bool CheckPurchase(Platform::String^ item);
			void SetPurchaseOK(Platform::String^ item);
			void TrackEvent(Platform::String^ name, Platform::String^ label);
			void PageStart(Platform::String^ name);
			void PageEnd(Platform::String^ name);
			void ShowMessageBox(Platform::String^ name);
			bool GetHttpResponse(Platform::String^ url);
		};
	}
}