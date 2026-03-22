#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"

class Class_1_39020151BC5E3AAA;
class Class_1_8289F2785D9AA990;
class Class_2_0206DD479BB5C906;
class Class_2_208CC9941471731A_962;
class Class_2_2B5C3D9688202862;
namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_C109CA982236435D_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x7BE58A0)
#define CLASS_3_C109CA982236435D_METHOD_3_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x7BE5BB0)
#define CLASS_3_C109CA982236435D_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x7BE5A20)
#define CLASS_3_C109CA982236435D_METHOD_3_A3952D4D9324402B_OFFSET UNITYSDK_OFFSET(0x7BE5C20)
#define CLASS_3_C109CA982236435D_METHOD_3_BEAB6CF0CF797770_OFFSET UNITYSDK_OFFSET(0x7BE5A80)
#define CLASS_3_C109CA982236435D_METHOD_3_D94FC80CD0C7479E_OFFSET UNITYSDK_OFFSET(0x7BE6000)
#define CLASS_3_C109CA982236435D_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x7BE4C20)
#define CLASS_3_C109CA982236435D__CCTOR_OFFSET UNITYSDK_OFFSET(0x7BE5900)
#define CLASS_3_C109CA982236435D__CTOR_OFFSET UNITYSDK_OFFSET(0x7BE5980)

inline static constexpr unsigned int Class_3_C109CA982236435D_TypeDefinitionIndex = 66965;

class Class_3_C109CA982236435D : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_12 = 0x93; // 0x0
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::Class_2_2B5C3D9688202862*>* Field_3_1; // 0x48
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_3_4; // 0x50
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* Field_3_3; // 0x58
	::Class_1_8289F2785D9AA990* Field_3_6; // 0x60
	::Class_1_8289F2785D9AA990* Field_3_9; // 0x68
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* Field_3_5; // 0x70
	::Foundation::DoubleKeyDictionary_3<::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement, ::Class_2_0206DD479BB5C906*>* Field_3_7; // 0x78
	::Foundation::DoubleKeyDictionary_3<::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement, ::Class_1_39020151BC5E3AAA*>* Field_3_0; // 0x80
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* Field_3_2; // 0x88
	::Foundation::DoubleKeyDictionary_3<::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement, ::Class_1_8289F2785D9AA990*>* Field_3_8; // 0x90
	::System::Single Field_3_11; // 0x98
	::System::Boolean Field_3_10; // 0x9C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C109CA982236435D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C109CA982236435D__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C109CA982236435D_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C109CA982236435D_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C109CA982236435D_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_C109CA982236435D* Method_3_BEAB6CF0CF797770()
	{
		return ((::Class_3_C109CA982236435D*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C109CA982236435D_METHOD_3_BEAB6CF0CF797770_OFFSET))();
	}

	::System::Void Method_3_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C109CA982236435D_METHOD_3_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_3_A3952D4D9324402B(::Class_2_208CC9941471731A_962* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_962*))((::PBYTE)hIl2Cpp + CLASS_3_C109CA982236435D_METHOD_3_A3952D4D9324402B_OFFSET))(this, a1);
	}

	::System::Void Method_3_D94FC80CD0C7479E(::MoleMole::Config::DamageElementType a1, ::System::Int32 a2, ::Class_2_208CC9941471731A_962* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::System::Int32, ::Class_2_208CC9941471731A_962*))((::PBYTE)hIl2Cpp + CLASS_3_C109CA982236435D_METHOD_3_D94FC80CD0C7479E_OFFSET))(this, a1, a2, a3);
	}
};
