#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace QWER { class CServiceFrontend; }
namespace System { template <typename T> class Action_1; }

#define QWER_SSERVICEFRONTENDID_POST_OFFSET UNITYSDK_OFFSET(0x980E60)
#define QWER_SSERVICEFRONTENDID__CTOR_OFFSET UNITYSDK_OFFSET(0x3074E0)

namespace QWER
{
	inline static constexpr unsigned int SServiceFrontendID_TypeDefinitionIndex = 84153;

	struct alignas(8) SServiceFrontendID
	{
		::QWER::CServiceFrontend* m_oServiceFrontend; // 0x10

		::System::Void _ctor(::QWER::CServiceFrontend* oServiceFrontend)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::CServiceFrontend*))((::PBYTE)hIl2Cpp + QWER_SSERVICEFRONTENDID__CTOR_OFFSET))(this, oServiceFrontend);
		}

		::System::Void Post(::System::Action_1<::QWER::CServiceFrontend*>* cbAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::QWER::CServiceFrontend*>*))((::PBYTE)hIl2Cpp + QWER_SSERVICEFRONTENDID_POST_OFFSET))(this, cbAction);
		}
	};
}
