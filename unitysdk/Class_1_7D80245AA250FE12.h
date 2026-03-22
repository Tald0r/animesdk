#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/InspireZoneOperationType.h"
#include "unitysdk/System/Object.h"

class Class_3_11169EF287A415D4;
class Class_3_7C1512077AC613AE;
namespace MoleMole { class UIInLevelExQteFeverV3ChildWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_1_7D80245AA250FE12_METHOD_1_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0xB89E490)
#define CLASS_1_7D80245AA250FE12_METHOD_1_15218209419C07DA_OFFSET UNITYSDK_OFFSET(0xB89D060)
#define CLASS_1_7D80245AA250FE12_METHOD_1_38CB5172B7D398E7_OFFSET UNITYSDK_OFFSET(0xB89D760)
#define CLASS_1_7D80245AA250FE12_METHOD_1_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0xB89EC30)
#define CLASS_1_7D80245AA250FE12_METHOD_1_5D65393EE7EC03BB_OFFSET UNITYSDK_OFFSET(0xB89DA70)
#define CLASS_1_7D80245AA250FE12_METHOD_1_6B0BFBE45C308435_OFFSET UNITYSDK_OFFSET(0xB89CFA0)
#define CLASS_1_7D80245AA250FE12_METHOD_1_9FCCB5B9D36D35E9_OFFSET UNITYSDK_OFFSET(0xB89DD00)
#define CLASS_1_7D80245AA250FE12_METHOD_1_C3DB5CCB81D3E05E_OFFSET UNITYSDK_OFFSET(0xB89D1F0)
#define CLASS_1_7D80245AA250FE12_METHOD_1_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0xB89E590)
#define CLASS_1_7D80245AA250FE12_METHOD_1_DFB53B789DEB4FB5_OFFSET UNITYSDK_OFFSET(0xB89D490)
#define CLASS_1_7D80245AA250FE12__CTOR_OFFSET UNITYSDK_OFFSET(0xB89CF90)

inline static constexpr unsigned int Class_1_7D80245AA250FE12_TypeDefinitionIndex = 77590;

class Class_1_7D80245AA250FE12 : public ::System::Object
{
public:
	::MoleMole::UIInLevelExQteFeverV3ChildWindowController* Field_1_0; // 0x10
	::Class_3_11169EF287A415D4* Field_1_2; // 0x18
	::Class_3_7C1512077AC613AE* Field_1_3; // 0x20
	::MoleMole::Battle::InspireZoneOperationType Field_1_9; // 0x28
	::System::Single Field_1_5; // 0x2C
	::System::Int32 Field_1_7; // 0x30
	::System::Int32 Field_1_8; // 0x34
	::System::Boolean Field_1_4; // 0x38
	::System::UInt32 Field_1_1; // 0x3C
	::System::Single Field_1_6; // 0x40

	::System::Void _ctor(::MoleMole::UIInLevelExQteFeverV3ChildWindowController* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelExQteFeverV3ChildWindowController*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_1_6B0BFBE45C308435(::System::Single a1)
	{
		return ((::System::String*(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12_METHOD_1_6B0BFBE45C308435_OFFSET))(a1);
	}

	::System::Void Method_1_15218209419C07DA(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12_METHOD_1_15218209419C07DA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DFB53B789DEB4FB5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12_METHOD_1_DFB53B789DEB4FB5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5D65393EE7EC03BB(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12_METHOD_1_5D65393EE7EC03BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_C3DB5CCB81D3E05E(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12_METHOD_1_C3DB5CCB81D3E05E_OFFSET))(this, a1, a2);
	}

	static ::System::Single Method_1_124E7DAB85EAFECD()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12_METHOD_1_124E7DAB85EAFECD_OFFSET))();
	}

	::System::Void Method_1_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12_METHOD_1_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::System::Void Method_1_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12_METHOD_1_4A41C63BFE58D26F_OFFSET))(this);
	}

	::System::Void Method_1_9FCCB5B9D36D35E9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12_METHOD_1_9FCCB5B9D36D35E9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_38CB5172B7D398E7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12_METHOD_1_38CB5172B7D398E7_OFFSET))(this, a1);
	}
};
