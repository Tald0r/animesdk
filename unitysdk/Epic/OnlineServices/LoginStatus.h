#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int LoginStatus_TypeDefinitionIndex = 31814;

	enum class LoginStatus : ::System::Int32
	{
		NotLoggedIn = 0,
		UsingLocalProfile = 1,
		LoggedIn = 2,
	};
}
