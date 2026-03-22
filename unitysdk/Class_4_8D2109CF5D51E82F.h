#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_BF86F633CB1E0F0F.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigCurveCtrlMatColorNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define CLASS_4_8D2109CF5D51E82F_METHOD_4_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1385E5C0)
#define CLASS_4_8D2109CF5D51E82F_METHOD_4_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1385E140)
#define CLASS_4_8D2109CF5D51E82F_METHOD_4_729ABA6AA3B854F7_OFFSET UNITYSDK_OFFSET(0x1385DC60)
#define CLASS_4_8D2109CF5D51E82F_METHOD_4_936773021FAF4D21_OFFSET UNITYSDK_OFFSET(0x1385E1C0)
#define CLASS_4_8D2109CF5D51E82F_METHOD_4_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x1385DBA0)
#define CLASS_4_8D2109CF5D51E82F__CTOR_OFFSET UNITYSDK_OFFSET(0x1385E5B0)

inline static constexpr unsigned int Class_4_8D2109CF5D51E82F_TypeDefinitionIndex = 52468;

class Class_4_8D2109CF5D51E82F : public ::Class_3_BF86F633CB1E0F0F
{
public:
	::Il2CppArray<::UnityEngine::Material*>* Field_4_1; // 0x48
	::MoleMole::Config::ConfigCurveCtrlMatColorNode* Field_4_0; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Color>* Field_4_5; // 0x58
	::System::String* Field_4_2; // 0x60
	::System::Boolean Field_4_4; // 0x68
	::UnityEngine::Color Field_4_3; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8D2109CF5D51E82F__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8D2109CF5D51E82F_METHOD_4_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_4_729ABA6AA3B854F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8D2109CF5D51E82F_METHOD_4_729ABA6AA3B854F7_OFFSET))(this);
	}

	::System::Void Method_4_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8D2109CF5D51E82F_METHOD_4_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_4_936773021FAF4D21()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8D2109CF5D51E82F_METHOD_4_936773021FAF4D21_OFFSET))(this);
	}

	::System::Void Method_4_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8D2109CF5D51E82F_METHOD_4_4343F372F34C05BF_1_OFFSET))(this);
	}
};
