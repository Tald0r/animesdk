#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2F64460E7C7A0A4C.h"

class Class_2_04999CCE6E77B4A2_13;
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }
namespace MoleMole { class UIInLevelCountDownUIChildWindowController; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define CLASS_3_E2199CD8F2C02A05_GETBUBBLEWIDGET_OFFSET UNITYSDK_OFFSET(0x9A57850)
#define CLASS_3_E2199CD8F2C02A05_METHOD_3_26851B7740A8223E_OFFSET UNITYSDK_OFFSET(0x9A589C0)
#define CLASS_3_E2199CD8F2C02A05_METHOD_3_448D9094B67F6275_OFFSET UNITYSDK_OFFSET(0x9A58590)
#define CLASS_3_E2199CD8F2C02A05_METHOD_3_844C17CBA45D2C28_OFFSET UNITYSDK_OFFSET(0x9A57DD0)
#define CLASS_3_E2199CD8F2C02A05_METHOD_3_A3EBE3D65878FB6E_OFFSET UNITYSDK_OFFSET(0x9A57230)
#define CLASS_3_E2199CD8F2C02A05_METHOD_3_A679DB14BB799BE6_OFFSET UNITYSDK_OFFSET(0x9A58CB0)
#define CLASS_3_E2199CD8F2C02A05_METHOD_3_B93DCFC57470A0D2_OFFSET UNITYSDK_OFFSET(0x9A58CD0)
#define CLASS_3_E2199CD8F2C02A05_METHOD_3_C4425D7230845246_OFFSET UNITYSDK_OFFSET(0x9A589A0)
#define CLASS_3_E2199CD8F2C02A05_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9A58BE0)
#define CLASS_3_E2199CD8F2C02A05_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x9A58C50)
#define CLASS_3_E2199CD8F2C02A05_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x9A58D90)
#define CLASS_3_E2199CD8F2C02A05_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9A57CE0)
#define CLASS_3_E2199CD8F2C02A05_METHOD_3_D081995AED5DD195_OFFSET UNITYSDK_OFFSET(0x9A57D50)
#define CLASS_3_E2199CD8F2C02A05_METHOD_3_E0A4A204D1E4916B_OFFSET UNITYSDK_OFFSET(0x9A58B50)
#define CLASS_3_E2199CD8F2C02A05_METHOD_3_EC00644AF39B5DED_OFFSET UNITYSDK_OFFSET(0x9A57060)
#define CLASS_3_E2199CD8F2C02A05_OPENBUBBLEROW_OFFSET UNITYSDK_OFFSET(0x9A57A90)
#define CLASS_3_E2199CD8F2C02A05__CTOR_OFFSET UNITYSDK_OFFSET(0x9A57CD0)

inline static constexpr unsigned int Class_3_E2199CD8F2C02A05_TypeDefinitionIndex = 73287;

class Class_3_E2199CD8F2C02A05 : public ::Class_2_2F64460E7C7A0A4C<::Class_3_E2199CD8F2C02A05*>
{
public:
	::Class_2_04999CCE6E77B4A2_13* Field_3_0; // 0x70
	::MoleMole::UIInLevelCountDownUIChildWindowController* Field_3_1; // 0x78
	::System::Int32 Field_3_4; // 0x80
	::System::Boolean Field_3_2; // 0x84
	::System::Boolean Field_3_3; // 0x85

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2199CD8F2C02A05__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EC00644AF39B5DED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2199CD8F2C02A05_METHOD_3_EC00644AF39B5DED_OFFSET))(this);
	}

	::System::Void Method_3_A3EBE3D65878FB6E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2199CD8F2C02A05_METHOD_3_A3EBE3D65878FB6E_OFFSET))(this);
	}

	::MoleMole::UIGeneralNewsBubbleWidgetController* GetBubbleWidget()
	{
		return ((::MoleMole::UIGeneralNewsBubbleWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2199CD8F2C02A05_GETBUBBLEWIDGET_OFFSET))(this);
	}

	::MoleMole::UIGeneralNewsBubbleRowWidgetController* OpenBubbleRow()
	{
		return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2199CD8F2C02A05_OPENBUBBLEROW_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2199CD8F2C02A05_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_D081995AED5DD195(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_E2199CD8F2C02A05_METHOD_3_D081995AED5DD195_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_448D9094B67F6275(::System::Object* a1, ::MoleMole::UIGeneralNewsBubbleRowWidgetController* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_3_E2199CD8F2C02A05_METHOD_3_448D9094B67F6275_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C4425D7230845246(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_E2199CD8F2C02A05_METHOD_3_C4425D7230845246_OFFSET))(this, a1);
	}

	::System::Void Method_3_E0A4A204D1E4916B(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_E2199CD8F2C02A05_METHOD_3_E0A4A204D1E4916B_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2199CD8F2C02A05_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2199CD8F2C02A05_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_A679DB14BB799BE6(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_E2199CD8F2C02A05_METHOD_3_A679DB14BB799BE6_OFFSET))(this, a1);
	}

	::System::Void Method_3_26851B7740A8223E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E2199CD8F2C02A05_METHOD_3_26851B7740A8223E_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2199CD8F2C02A05_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Boolean Method_3_B93DCFC57470A0D2(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E2199CD8F2C02A05_METHOD_3_B93DCFC57470A0D2_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_844C17CBA45D2C28(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_E2199CD8F2C02A05_METHOD_3_844C17CBA45D2C28_OFFSET))(this, a1);
	}
};
