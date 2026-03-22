#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2BABAD86425D1A28.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/Struct_2_02E84E3D148EE908.h"

class Class_0_16E4307DCC419505_170;
class Class_1_E3C8DF71C8B38B7D;
class Class_2_C52BB67DB026329F;
class Class_2_F5737224A0253470;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E84C3C6921614D7A_METHOD_2_0D3F8DD0A2DA638E_OFFSET UNITYSDK_OFFSET(0x88E2420)
#define CLASS_2_E84C3C6921614D7A_METHOD_2_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x88E20D0)
#define CLASS_2_E84C3C6921614D7A_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x88E1F20)
#define CLASS_2_E84C3C6921614D7A_METHOD_2_A622D5010DB8C573_OFFSET UNITYSDK_OFFSET(0x88E1B40)
#define CLASS_2_E84C3C6921614D7A_METHOD_2_A7FF6AA8FA2F7FEB_OFFSET UNITYSDK_OFFSET(0x88E15C0)
#define CLASS_2_E84C3C6921614D7A_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x88E1790)
#define CLASS_2_E84C3C6921614D7A_METHOD_2_EBAF10BBA97B82DD_OFFSET UNITYSDK_OFFSET(0x88E1EB0)
#define CLASS_2_E84C3C6921614D7A__CTOR_OFFSET UNITYSDK_OFFSET(0x88E1370)

inline static constexpr unsigned int Class_2_E84C3C6921614D7A_TypeDefinitionIndex = 37899;

class Class_2_E84C3C6921614D7A : public ::Class_1_2BABAD86425D1A28
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_170*>* Field_2_3; // 0x28
	::Class_2_F5737224A0253470* Field_2_0; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_2; // 0x38
	::Class_2_C52BB67DB026329F* Field_2_1; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* Field_2_4; // 0x48
	::System::Boolean Field_2_6; // 0x50
	::System::Boolean Field_2_5; // 0x51

	::System::Void _ctor(::Class_2_C52BB67DB026329F* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::Struct_2_02E84E3D148EE908 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C52BB67DB026329F*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::Struct_2_02E84E3D148EE908))((::PBYTE)hIl2Cpp + CLASS_2_E84C3C6921614D7A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A7FF6AA8FA2F7FEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E84C3C6921614D7A_METHOD_2_A7FF6AA8FA2F7FEB_OFFSET))(this);
	}

	::System::Void Method_2_EBAF10BBA97B82DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E84C3C6921614D7A_METHOD_2_EBAF10BBA97B82DD_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E84C3C6921614D7A_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E84C3C6921614D7A_METHOD_2_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Void Method_2_A622D5010DB8C573(::Class_1_E3C8DF71C8B38B7D* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3C8DF71C8B38B7D*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E84C3C6921614D7A_METHOD_2_A622D5010DB8C573_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0D3F8DD0A2DA638E(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_E84C3C6921614D7A_METHOD_2_0D3F8DD0A2DA638E_OFFSET))(this, a1);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E84C3C6921614D7A_METHOD_2_DD784213055292FB_OFFSET))(this);
	}
};
