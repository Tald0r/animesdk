#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_BF86F633CB1E0F0F.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigCurveCtrlMatIntensityNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define CLASS_4_B9CC09FBBCE232C5_METHOD_4_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x97A3840)
#define CLASS_4_B9CC09FBBCE232C5_METHOD_4_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x97A31A0)
#define CLASS_4_B9CC09FBBCE232C5_METHOD_4_729ABA6AA3B854F7_OFFSET UNITYSDK_OFFSET(0x97A2CC0)
#define CLASS_4_B9CC09FBBCE232C5_METHOD_4_EB1549E9C6E3B4E9_OFFSET UNITYSDK_OFFSET(0x97A3220)
#define CLASS_4_B9CC09FBBCE232C5_METHOD_4_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x97A2C00)
#define CLASS_4_B9CC09FBBCE232C5__CTOR_OFFSET UNITYSDK_OFFSET(0x97A3830)

inline static constexpr unsigned int Class_4_B9CC09FBBCE232C5_TypeDefinitionIndex = 76494;

class Class_4_B9CC09FBBCE232C5 : public ::Class_3_BF86F633CB1E0F0F
{
public:
	::Il2CppArray<::UnityEngine::Material*>* Field_4_1; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Color>* Field_4_5; // 0x50
	::System::String* Field_4_2; // 0x58
	::MoleMole::Config::ConfigCurveCtrlMatIntensityNode* Field_4_0; // 0x60
	::UnityEngine::Color Field_4_3; // 0x68
	::System::Boolean Field_4_4; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9CC09FBBCE232C5__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9CC09FBBCE232C5_METHOD_4_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_4_729ABA6AA3B854F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9CC09FBBCE232C5_METHOD_4_729ABA6AA3B854F7_OFFSET))(this);
	}

	::System::Void Method_4_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9CC09FBBCE232C5_METHOD_4_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_4_EB1549E9C6E3B4E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9CC09FBBCE232C5_METHOD_4_EB1549E9C6E3B4E9_OFFSET))(this);
	}

	::System::Void Method_4_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9CC09FBBCE232C5_METHOD_4_4343F372F34C05BF_1_OFFSET))(this);
	}
};
