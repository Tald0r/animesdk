#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class Action; }

#define CLASS_1_CCE9163799DAAFDF_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x626DA00)
#define CLASS_1_CCE9163799DAAFDF_METHOD_1_5663280591A84D3C_OFFSET UNITYSDK_OFFSET(0x626D8D0)
#define CLASS_1_CCE9163799DAAFDF_METHOD_1_7C726E6537614255_OFFSET UNITYSDK_OFFSET(0x626D090)
#define CLASS_1_CCE9163799DAAFDF_METHOD_1_BBBFDD51A4F794B8_OFFSET UNITYSDK_OFFSET(0x626D250)
#define CLASS_1_CCE9163799DAAFDF_METHOD_1_E076FF7A49A60BEC_OFFSET UNITYSDK_OFFSET(0x626CFC0)
#define CLASS_1_CCE9163799DAAFDF_METHOD_1_ED6CF54BFD44815E_OFFSET UNITYSDK_OFFSET(0x626D830)

inline static constexpr unsigned int Class_1_CCE9163799DAAFDF_TypeDefinitionIndex = 44444;

class Class_1_CCE9163799DAAFDF : public ::System::Object
{
public:
	static ::Cysharp::Threading::Tasks::UniTask Method_1_E076FF7A49A60BEC(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_CCE9163799DAAFDF_METHOD_1_E076FF7A49A60BEC_OFFSET))(a1);
	}

	static ::System::Void Method_1_7C726E6537614255(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CCE9163799DAAFDF_METHOD_1_7C726E6537614255_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5663280591A84D3C(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CCE9163799DAAFDF_METHOD_1_5663280591A84D3C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ED6CF54BFD44815E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CCE9163799DAAFDF_METHOD_1_ED6CF54BFD44815E_OFFSET))(a1);
	}

	static ::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CCE9163799DAAFDF_METHOD_1_151E25A63D14DDB0_OFFSET))();
	}

	static ::System::Void Method_1_BBBFDD51A4F794B8(::System::Int32 a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CCE9163799DAAFDF_METHOD_1_BBBFDD51A4F794B8_OFFSET))(a1, a2, a3);
	}
};
