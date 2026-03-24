#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define QWER_CRUNNERLOGGERIMPL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B011380)
#define QWER_CRUNNERLOGGERIMPL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0113C0)
#define QWER_CRUNNERLOGGERIMPL___C___CTOR_B__16_0_OFFSET UNITYSDK_OFFSET(0x1B0113D0)

namespace QWER
{
	inline static constexpr unsigned int CRunnerLoggerImpl___c_TypeDefinitionIndex = 84133;

	class CRunnerLoggerImpl___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::DateTimeOffset>** StaticGet___9__16_0()
		{
			return (::System::Func_1<::System::DateTimeOffset>**)Il2CppClass::FromTypeDefinitionIndex(CRunnerLoggerImpl___c_TypeDefinitionIndex)->GetStaticField(0x49080);
		}
		static ::QWER::CRunnerLoggerImpl___c** StaticGet___9()
		{
			return (::QWER::CRunnerLoggerImpl___c**)Il2CppClass::FromTypeDefinitionIndex(CRunnerLoggerImpl___c_TypeDefinitionIndex)->GetStaticField(0x49088);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGERIMPL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGERIMPL___C__CTOR_OFFSET))(this);
		}

		::System::DateTimeOffset __ctor_b__16_0()
		{
			return ((::System::DateTimeOffset(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGERIMPL___C___CTOR_B__16_0_OFFSET))(this);
		}
	};
}
