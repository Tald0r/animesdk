#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7A5F167CAAA013FB.h"
#include "unitysdk/Enum_3_65BB655811A73E3A.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/Share/EAvatarShowWeaponType.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/Struct_2_6042AC018BEA22C9.h"
#include "unitysdk/Struct_2_A840136A4E657746_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_219;
class Class_1_9B8A28A306558B7F;
namespace MoleMole { class InLevelAvatarDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8C4A02E118DF31DE_METHOD_2_0D98BA1C1344E5B3_OFFSET UNITYSDK_OFFSET(0x10B9CE60)
#define CLASS_2_8C4A02E118DF31DE_METHOD_2_170CF903159859AC_OFFSET UNITYSDK_OFFSET(0x10B9CEE0)
#define CLASS_2_8C4A02E118DF31DE_METHOD_2_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x10B9D480)
#define CLASS_2_8C4A02E118DF31DE_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0x10B9CED0)
#define CLASS_2_8C4A02E118DF31DE_METHOD_2_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x10B9C5C0)
#define CLASS_2_8C4A02E118DF31DE_METHOD_2_4BAA8431768C8B75_OFFSET UNITYSDK_OFFSET(0x10B9C630)
#define CLASS_2_8C4A02E118DF31DE_METHOD_2_4E7DB4ADA81A64B7_OFFSET UNITYSDK_OFFSET(0x10B9D490)
#define CLASS_2_8C4A02E118DF31DE_METHOD_2_52DC2E7AB7EF9D49_OFFSET UNITYSDK_OFFSET(0x10B9CAC0)
#define CLASS_2_8C4A02E118DF31DE_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x10B9C370)
#define CLASS_2_8C4A02E118DF31DE_METHOD_2_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x10B9DEB0)
#define CLASS_2_8C4A02E118DF31DE_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x10B9CA50)
#define CLASS_2_8C4A02E118DF31DE_METHOD_2_B9C5B6CC0A9CD372_OFFSET UNITYSDK_OFFSET(0x10B9D410)
#define CLASS_2_8C4A02E118DF31DE_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x10B9C550)
#define CLASS_2_8C4A02E118DF31DE__CTOR_OFFSET UNITYSDK_OFFSET(0x10B9C6B0)

inline static constexpr unsigned int Class_2_8C4A02E118DF31DE_TypeDefinitionIndex = 40140;

class Class_2_8C4A02E118DF31DE : public ::Class_1_7A5F167CAAA013FB
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_2; // 0xE8
	::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* Field_2_6; // 0xF0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_1; // 0xF8
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_7; // 0x100
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_3; // 0x108
	::Struct_2_6042AC018BEA22C9 Field_2_0; // 0x110
	::Struct_2_A840136A4E657746_2 Field_2_5; // 0x11C
	::Share::EAvatarShowWeaponType Field_2_8; // 0x128
	::Struct_2_A840136A4E657746_2 Field_2_4; // 0x12C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C4A02E118DF31DE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C4A02E118DF31DE_METHOD_2_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C4A02E118DF31DE_METHOD_2_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_2_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C4A02E118DF31DE_METHOD_2_3C56C1AF247AC1EC_OFFSET))(this);
	}

	::System::Void Method_2_4BAA8431768C8B75(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8C4A02E118DF31DE_METHOD_2_4BAA8431768C8B75_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8C4A02E118DF31DE_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* Method_2_52DC2E7AB7EF9D49(::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_2_8C4A02E118DF31DE_METHOD_2_52DC2E7AB7EF9D49_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D98BA1C1344E5B3(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8C4A02E118DF31DE_METHOD_2_0D98BA1C1344E5B3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C4A02E118DF31DE_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::System::Int32 Method_2_170CF903159859AC(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8C4A02E118DF31DE_METHOD_2_170CF903159859AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C4A02E118DF31DE_METHOD_2_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_2_4E7DB4ADA81A64B7(::System::UInt32 a1, ::Class_1_9B8A28A306558B7F* a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* a9, ::Enum_3_65BB655811A73E3A a10, ::MoleMole::Config::CampType a11, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a12, ::System::Collections::Generic::HashSet_1<::System::String*>* a13, ::System::Collections::Generic::HashSet_1<::System::Int32>* a14, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a15, ::Class_0_16E4307DCC419505_219* a16, ::Share::EAvatarShowWeaponType a17, ::System::Int32 a18, ::System::Collections::Generic::List_1<::System::Int32>* a19)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_9B8A28A306558B7F*, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>*, ::Enum_3_65BB655811A73E3A, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::Class_0_16E4307DCC419505_219*, ::Share::EAvatarShowWeaponType, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_8C4A02E118DF31DE_METHOD_2_4E7DB4ADA81A64B7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
	}

	::System::Void Method_2_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C4A02E118DF31DE_METHOD_2_AA7E3074254D484A_OFFSET))(this);
	}

	::MoleMole::InLevelAvatarDataItem* Method_2_B9C5B6CC0A9CD372()
	{
		return ((::MoleMole::InLevelAvatarDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C4A02E118DF31DE_METHOD_2_B9C5B6CC0A9CD372_OFFSET))(this);
	}
};
