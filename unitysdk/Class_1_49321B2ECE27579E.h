#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E59EBF731DAB27AA_Enum_3_D6A1C366BEC79821.h"
#include "unitysdk/Enum_3_2D4CB32960F34676.h"
#include "unitysdk/MoleMole/HollowChessboard/GeometryHeightType.h"
#include "unitysdk/Struct_2_11287F05B515FFA7.h"
#include "unitysdk/Struct_2_E3BB9C4572628666.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_49321B2ECE27579E_METHOD_1_31C057A377CD9B27_OFFSET UNITYSDK_OFFSET(0x8FD09B0)
#define CLASS_1_49321B2ECE27579E_METHOD_1_4E1969F1317D7407_OFFSET UNITYSDK_OFFSET(0x8FD1010)
#define CLASS_1_49321B2ECE27579E_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x8FD0DC0)
#define CLASS_1_49321B2ECE27579E_METHOD_1_6D8FEB353E431543_OFFSET UNITYSDK_OFFSET(0x8FD0DD0)
#define CLASS_1_49321B2ECE27579E_METHOD_1_D1AC4F3522408953_OFFSET UNITYSDK_OFFSET(0x8FD0F10)
#define CLASS_1_49321B2ECE27579E_METHOD_1_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x8FD0B00)
#define CLASS_1_49321B2ECE27579E_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x8FD10B0)
#define CLASS_1_49321B2ECE27579E_METHOD_1_EB568D8CADD17AF8_OFFSET UNITYSDK_OFFSET(0x8FD0CF0)
#define CLASS_1_49321B2ECE27579E__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FD09A0)
#define CLASS_1_49321B2ECE27579E__CTOR_OFFSET UNITYSDK_OFFSET(0x8FD07C0)

inline static constexpr unsigned int Class_1_49321B2ECE27579E_TypeDefinitionIndex = 65398;

class Class_1_49321B2ECE27579E : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_49321B2ECE27579E_TypeDefinitionIndex)->GetStaticField(0x9B40);
	}
	::System::Collections::Generic::List_1<::Struct_2_E3BB9C4572628666>* Field_1_4; // 0x10
	::Struct_2_E3BB9C4572628666 Field_1_7; // 0x18
	::Struct_2_E3BB9C4572628666 Field_1_6; // 0x38
	::System::Collections::Generic::List_1<::Struct_2_E3BB9C4572628666>* Field_1_2; // 0x58
	::System::Collections::Generic::Dictionary_2<::Class_1_E59EBF731DAB27AA_Enum_3_D6A1C366BEC79821, ::System::Single>* Field_1_5; // 0x60
	::System::Single Field_1_8; // 0x68
	::Enum_3_2D4CB32960F34676 Field_1_1; // 0x6C
	::MoleMole::HollowChessboard::GeometryHeightType Field_1_3; // 0x70

	::System::Void _ctor(::MoleMole::HollowChessboard::GeometryHeightType a1, ::Enum_3_2D4CB32960F34676 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::GeometryHeightType, ::Enum_3_2D4CB32960F34676))((::PBYTE)hIl2Cpp + CLASS_1_49321B2ECE27579E__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_49321B2ECE27579E__CCTOR_OFFSET))();
	}

	::Struct_2_11287F05B515FFA7 Method_1_31C057A377CD9B27(::Struct_2_E3BB9C4572628666 a1)
	{
		return ((::Struct_2_11287F05B515FFA7(*)(::PVOID, ::Struct_2_E3BB9C4572628666))((::PBYTE)hIl2Cpp + CLASS_1_49321B2ECE27579E_METHOD_1_31C057A377CD9B27_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49321B2ECE27579E_METHOD_1_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Boolean Method_1_EB568D8CADD17AF8(::Struct_2_11287F05B515FFA7 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_11287F05B515FFA7))((::PBYTE)hIl2Cpp + CLASS_1_49321B2ECE27579E_METHOD_1_EB568D8CADD17AF8_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49321B2ECE27579E_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_6D8FEB353E431543(::Class_1_E59EBF731DAB27AA_Enum_3_D6A1C366BEC79821 a1, ::System::Boolean& a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_E59EBF731DAB27AA_Enum_3_D6A1C366BEC79821, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_49321B2ECE27579E_METHOD_1_6D8FEB353E431543_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D1AC4F3522408953(::Class_1_E59EBF731DAB27AA_Enum_3_D6A1C366BEC79821 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E59EBF731DAB27AA_Enum_3_D6A1C366BEC79821, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_49321B2ECE27579E_METHOD_1_D1AC4F3522408953_OFFSET))(this, a1, a2);
	}

	::Struct_2_E3BB9C4572628666 Method_1_4E1969F1317D7407()
	{
		return ((::Struct_2_E3BB9C4572628666(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49321B2ECE27579E_METHOD_1_4E1969F1317D7407_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_49321B2ECE27579E_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}
};
