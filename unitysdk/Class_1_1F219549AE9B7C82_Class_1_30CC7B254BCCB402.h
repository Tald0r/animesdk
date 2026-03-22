#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EA9A3C1106CBD311.h"
#include "unitysdk/System/Object.h"

class Class_1_83665B095F1535B5_1;
class Class_2_208CC9941471731A_131;
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_1F219549AE9B7C82_CLASS_1_30CC7B254BCCB402_METHOD_1_4380AD37FA804413_OFFSET UNITYSDK_OFFSET(0x925D190)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_30CC7B254BCCB402_METHOD_1_54F1D09299B485CE_OFFSET UNITYSDK_OFFSET(0x925CF20)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_30CC7B254BCCB402__CTOR_OFFSET UNITYSDK_OFFSET(0x925CF10)

inline static constexpr unsigned int Class_1_1F219549AE9B7C82_Class_1_30CC7B254BCCB402_TypeDefinitionIndex = 57073;

class Class_1_1F219549AE9B7C82_Class_1_30CC7B254BCCB402 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action* Field_1_4; // 0x18
	::System::Action_1<::Class_1_83665B095F1535B5_1*>* Field_1_5; // 0x20
	::Struct_2_EA9A3C1106CBD311 Field_1_3; // 0x28
	::Class_2_208CC9941471731A_131* Field_1_2; // 0x80
	::System::Int32 Field_1_0; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_30CC7B254BCCB402__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_54F1D09299B485CE(::MoleMole::UIGeneralTipsPopWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralTipsPopWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_30CC7B254BCCB402_METHOD_1_54F1D09299B485CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_4380AD37FA804413(::MoleMole::UIGeneralTipsPopWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralTipsPopWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_30CC7B254BCCB402_METHOD_1_4380AD37FA804413_OFFSET))(this, a1);
	}
};
