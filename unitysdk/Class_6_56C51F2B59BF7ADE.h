#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A617B16EB30351B4_Enum_3_A99842A1E3D723C3.h"
#include "unitysdk/Class_5_2572AF054200F54C.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_11A58A840528E5B2;
class Class_1_2EF69FD7F867E7F6;
class Class_3_0672DFF434E78344;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigHollowChessboardObservation; }

#define CLASS_6_56C51F2B59BF7ADE_METHOD_6_33FF3FEF585E3F13_OFFSET UNITYSDK_OFFSET(0xC4955D0)
#define CLASS_6_56C51F2B59BF7ADE_METHOD_6_54F955FB587CA520_OFFSET UNITYSDK_OFFSET(0xC4954E0)
#define CLASS_6_56C51F2B59BF7ADE_METHOD_6_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0xC495950)
#define CLASS_6_56C51F2B59BF7ADE_METHOD_6_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xC495940)
#define CLASS_6_56C51F2B59BF7ADE_METHOD_6_B771698CECD3F151_OFFSET UNITYSDK_OFFSET(0xC494C90)
#define CLASS_6_56C51F2B59BF7ADE_METHOD_6_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xC4958D0)
#define CLASS_6_56C51F2B59BF7ADE__CCTOR_OFFSET UNITYSDK_OFFSET(0xC495590)
#define CLASS_6_56C51F2B59BF7ADE__CTOR_OFFSET UNITYSDK_OFFSET(0xC494BF0)

inline static constexpr unsigned int Class_6_56C51F2B59BF7ADE_TypeDefinitionIndex = 61746;

class Class_6_56C51F2B59BF7ADE : public ::Class_5_2572AF054200F54C<::Class_3_0672DFF434E78344*>
{
public:
	static ::Class_1_A617B16EB30351B4_Enum_3_A99842A1E3D723C3* StaticGet_Field_6_0()
	{
		return (::Class_1_A617B16EB30351B4_Enum_3_A99842A1E3D723C3*)Il2CppClass::FromTypeDefinitionIndex(Class_6_56C51F2B59BF7ADE_TypeDefinitionIndex)->GetStaticField(0xDAD0);
	}
	::MoleMole::UIHollowMainPageController* Field_6_1; // 0x30

	::System::Void _ctor(::Class_1_11A58A840528E5B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11A58A840528E5B2*))((::PBYTE)hIl2Cpp + CLASS_6_56C51F2B59BF7ADE__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_6_56C51F2B59BF7ADE__CCTOR_OFFSET))();
	}

	::System::Void Method_6_B771698CECD3F151(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_6_56C51F2B59BF7ADE_METHOD_6_B771698CECD3F151_OFFSET))(this, a1);
	}

	::System::Void Method_6_33FF3FEF585E3F13(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_6_56C51F2B59BF7ADE_METHOD_6_33FF3FEF585E3F13_OFFSET))(this, a1);
	}

	static ::MoleMole::Config::ConfigHollowChessboardObservation* Method_6_54F955FB587CA520()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardObservation*(*)())((::PBYTE)hIl2Cpp + CLASS_6_56C51F2B59BF7ADE_METHOD_6_54F955FB587CA520_OFFSET))();
	}

	::System::Void Method_6_E9A575D18A0748D9(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_6_56C51F2B59BF7ADE_METHOD_6_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_6_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_56C51F2B59BF7ADE_METHOD_6_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_6_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_56C51F2B59BF7ADE_METHOD_6_832295EC279E5994_1_OFFSET))(this);
	}
};
