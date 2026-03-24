#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_F3891C5CBFD06A30.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_982178F761E7F1DC.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_328;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_5_0A8A59ADAC5CDE67_METHOD_5_09BA32DFBEEEC9A9_OFFSET UNITYSDK_OFFSET(0xAE9F360)
#define CLASS_5_0A8A59ADAC5CDE67_METHOD_5_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0xAE9F2F0)
#define CLASS_5_0A8A59ADAC5CDE67_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xAE9F3D0)
#define CLASS_5_0A8A59ADAC5CDE67_METHOD_5_6C4120DDAC15718B_OFFSET UNITYSDK_OFFSET(0xAE9EDC0)
#define CLASS_5_0A8A59ADAC5CDE67_METHOD_5_71258FE05AD0316C_1_OFFSET UNITYSDK_OFFSET(0xAE9F470)
#define CLASS_5_0A8A59ADAC5CDE67_METHOD_5_71258FE05AD0316C_OFFSET UNITYSDK_OFFSET(0xAE9E160)
#define CLASS_5_0A8A59ADAC5CDE67_METHOD_5_7D9FB684EF17D12D_OFFSET UNITYSDK_OFFSET(0xAE9F150)
#define CLASS_5_0A8A59ADAC5CDE67_METHOD_5_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xAE9F480)
#define CLASS_5_0A8A59ADAC5CDE67_METHOD_5_C31DAB201B9DC15A_OFFSET UNITYSDK_OFFSET(0xAE9EB00)
#define CLASS_5_0A8A59ADAC5CDE67_METHOD_5_D1AC69B93C328625_OFFSET UNITYSDK_OFFSET(0xAE9E4F0)
#define CLASS_5_0A8A59ADAC5CDE67_METHOD_5_D47B801A881A7EDA_OFFSET UNITYSDK_OFFSET(0xAE9F350)
#define CLASS_5_0A8A59ADAC5CDE67_METHOD_5_E20365345CC9C440_OFFSET UNITYSDK_OFFSET(0xAE9F310)
#define CLASS_5_0A8A59ADAC5CDE67_METHOD_5_E51EEF82C8AC6794_OFFSET UNITYSDK_OFFSET(0xAE9F200)
#define CLASS_5_0A8A59ADAC5CDE67_METHOD_5_EA3063A5CDD6F164_OFFSET UNITYSDK_OFFSET(0xAE9E030)
#define CLASS_5_0A8A59ADAC5CDE67_METHOD_5_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0xAE9F300)
#define CLASS_5_0A8A59ADAC5CDE67__CTOR_OFFSET UNITYSDK_OFFSET(0xAE9E980)

inline static constexpr unsigned int Class_5_0A8A59ADAC5CDE67_TypeDefinitionIndex = 43607;

class Class_5_0A8A59ADAC5CDE67 : public ::Class_4_F3891C5CBFD06A30
{
public:
	::System::Threading::CancellationTokenSource* Field_5_3; // 0x100
	::Il2CppArray<::Class_0_16E4307DCC419505_328*>* Field_5_1; // 0x108
	::Cysharp::Threading::Tasks::UniTask Field_5_2; // 0x110
	::Enum_3_982178F761E7F1DC Field_5_0; // 0x120

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0A8A59ADAC5CDE67__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_EA3063A5CDD6F164()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0A8A59ADAC5CDE67_METHOD_5_EA3063A5CDD6F164_OFFSET))(this);
	}

	::System::Boolean Method_5_71258FE05AD0316C(::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + CLASS_5_0A8A59ADAC5CDE67_METHOD_5_71258FE05AD0316C_OFFSET))(this, a1);
	}

	::System::String* Method_5_D1AC69B93C328625(::System::Boolean& a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_5_0A8A59ADAC5CDE67_METHOD_5_D1AC69B93C328625_OFFSET))(this, a1);
	}

	static ::System::Void Method_5_C31DAB201B9DC15A(::Enum_3_982178F761E7F1DC a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Enum_3_982178F761E7F1DC, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_0A8A59ADAC5CDE67_METHOD_5_C31DAB201B9DC15A_OFFSET))(a1, a2);
	}

	::System::Void Method_5_6C4120DDAC15718B(::Enum_3_982178F761E7F1DC a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_982178F761E7F1DC, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_0A8A59ADAC5CDE67_METHOD_5_6C4120DDAC15718B_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_E51EEF82C8AC6794(::Enum_3_982178F761E7F1DC a1, ::System::Boolean a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Enum_3_982178F761E7F1DC, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_5_0A8A59ADAC5CDE67_METHOD_5_E51EEF82C8AC6794_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_5_7D9FB684EF17D12D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0A8A59ADAC5CDE67_METHOD_5_7D9FB684EF17D12D_OFFSET))(this);
	}

	::System::Void Method_5_3DACC45AC8150727(::Enum_3_982178F761E7F1DC a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_982178F761E7F1DC))((::PBYTE)hIl2Cpp + CLASS_5_0A8A59ADAC5CDE67_METHOD_5_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_5_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0A8A59ADAC5CDE67_METHOD_5_FBF2CB29FD3B55E6_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_328* Method_5_E20365345CC9C440()
	{
		return ((::Class_0_16E4307DCC419505_328*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0A8A59ADAC5CDE67_METHOD_5_E20365345CC9C440_OFFSET))(this);
	}

	::System::String* Method_5_D47B801A881A7EDA(::System::Boolean& a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_5_0A8A59ADAC5CDE67_METHOD_5_D47B801A881A7EDA_OFFSET))(this, a1);
	}

	::System::Void Method_5_09BA32DFBEEEC9A9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_5_0A8A59ADAC5CDE67_METHOD_5_09BA32DFBEEEC9A9_OFFSET))(this, a1);
	}

	::System::Void Method_5_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0A8A59ADAC5CDE67_METHOD_5_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_5_71258FE05AD0316C_1(::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + CLASS_5_0A8A59ADAC5CDE67_METHOD_5_71258FE05AD0316C_1_OFFSET))(this, a1);
	}

	::Enum_3_982178F761E7F1DC Method_5_A96DCA30C6927810()
	{
		return ((::Enum_3_982178F761E7F1DC(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0A8A59ADAC5CDE67_METHOD_5_A96DCA30C6927810_OFFSET))(this);
	}
};
