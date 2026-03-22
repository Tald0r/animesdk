#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::P2P { class GetNATTypeOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_GETNATTYPEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x259A50)
#define EPIC_ONLINESERVICES_P2P_GETNATTYPEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8750D0)
#define EPIC_ONLINESERVICES_P2P_GETNATTYPEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x78EB40)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int GetNATTypeOptionsInternal_TypeDefinitionIndex = 32441;

	struct alignas(4) GetNATTypeOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::P2P::GetNATTypeOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::GetNATTypeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETNATTYPEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETNATTYPEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETNATTYPEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
