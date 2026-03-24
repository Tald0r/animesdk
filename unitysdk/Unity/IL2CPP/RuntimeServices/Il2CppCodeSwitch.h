#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITY_IL2CPP_RUNTIMESERVICES_IL2CPPCODESWITCH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B76EAD0)
#define UNITY_IL2CPP_RUNTIMESERVICES_IL2CPPCODESWITCH_ISENABLED_OFFSET UNITYSDK_OFFSET(0x1B76EAC0)
#define UNITY_IL2CPP_RUNTIMESERVICES_IL2CPPCODESWITCH_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B76EAB0)
#define UNITY_IL2CPP_RUNTIMESERVICES_IL2CPPCODESWITCH_SET_OFFSET UNITYSDK_OFFSET(0x1B76EAA0)

namespace Unity::IL2CPP::RuntimeServices
{
	inline static constexpr unsigned int Il2CppCodeSwitch_TypeDefinitionIndex = 6835;

	class Il2CppCodeSwitch : public ::System::Object
	{
	public:
		static ::System::Void Set(::System::Int32 code)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_RUNTIMESERVICES_IL2CPPCODESWITCH_SET_OFFSET))(code);
		}

		static ::System::Void Remove(::System::Int32 code)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_RUNTIMESERVICES_IL2CPPCODESWITCH_REMOVE_OFFSET))(code);
		}

		static ::System::Boolean IsEnabled(::System::Int32 code)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_RUNTIMESERVICES_IL2CPPCODESWITCH_ISENABLED_OFFSET))(code);
		}

		static ::System::Void Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_IL2CPP_RUNTIMESERVICES_IL2CPPCODESWITCH_CLEAR_OFFSET))();
		}
	};
}
