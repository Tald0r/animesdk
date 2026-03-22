#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_817E737241BDC0A2.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/Struct_2_A840136A4E657746_1.h"

class Class_0_16E4307DCC419505_336;
class Class_0_16E4307DCC419505_516;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_E996AE0A02B58C3E_METHOD_2_271A4AF070B34F3D_OFFSET UNITYSDK_OFFSET(0xD2113A0)
#define CLASS_2_E996AE0A02B58C3E_METHOD_2_5FF5C61A6E57C587_OFFSET UNITYSDK_OFFSET(0xD2115C0)
#define CLASS_2_E996AE0A02B58C3E_METHOD_2_973E653D6A148E91_OFFSET UNITYSDK_OFFSET(0xD210E50)
#define CLASS_2_E996AE0A02B58C3E__CTOR_OFFSET UNITYSDK_OFFSET(0xD211280)

inline static constexpr unsigned int Class_2_E996AE0A02B58C3E_TypeDefinitionIndex = 78389;

class Class_2_E996AE0A02B58C3E : public ::Class_1_817E737241BDC0A2
{
public:
	::Struct_2_A840136A4E657746_1 Field_2_0; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E996AE0A02B58C3E__CTOR_OFFSET))(this);
	}

	::System::Single Method_2_973E653D6A148E91(::Class_0_16E4307DCC419505_336* a1, ::MoleMole::Config::BaseProperty a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_0_16E4307DCC419505_336*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_2_E996AE0A02B58C3E_METHOD_2_973E653D6A148E91_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_271A4AF070B34F3D(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4, ::Class_0_16E4307DCC419505_336* a5, ::Class_0_16E4307DCC419505_516* a6, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Int32, ::Class_0_16E4307DCC419505_336*, ::Class_0_16E4307DCC419505_516*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_E996AE0A02B58C3E_METHOD_2_271A4AF070B34F3D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Single Method_2_5FF5C61A6E57C587(::Class_0_16E4307DCC419505_336* a1, ::MoleMole::Config::BaseProperty a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_0_16E4307DCC419505_336*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_2_E996AE0A02B58C3E_METHOD_2_5FF5C61A6E57C587_OFFSET))(this, a1, a2);
	}
};
