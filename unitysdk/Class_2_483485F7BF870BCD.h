#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C836D00248E6EFFE.h"
#include "unitysdk/Enum_3_1A3450664E1488DB.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_0F138252A5783001;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_3_883E597458B91E77_1;
class Class_3_8FA83DC50C27EB45;
class Class_3_9AE843FF905C0BDB;
class Class_3_F33F9DC5F4112336;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define CLASS_2_483485F7BF870BCD_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0x6D08F60)
#define CLASS_2_483485F7BF870BCD_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x6D0F800)
#define CLASS_2_483485F7BF870BCD_METHOD_2_381A3B5979ADE6D2_OFFSET UNITYSDK_OFFSET(0x6D0E8D0)
#define CLASS_2_483485F7BF870BCD_METHOD_2_412954138AE5DBE9_OFFSET UNITYSDK_OFFSET(0x6D09680)
#define CLASS_2_483485F7BF870BCD_METHOD_2_47680E2642F37A1B_OFFSET UNITYSDK_OFFSET(0x6D09A80)
#define CLASS_2_483485F7BF870BCD_METHOD_2_4D70E3D849E4E16D_OFFSET UNITYSDK_OFFSET(0x6D0D5B0)
#define CLASS_2_483485F7BF870BCD_METHOD_2_7619D93B61B6E841_OFFSET UNITYSDK_OFFSET(0x6D0F870)
#define CLASS_2_483485F7BF870BCD_METHOD_2_838C5A5961309B55_OFFSET UNITYSDK_OFFSET(0x6D09F10)
#define CLASS_2_483485F7BF870BCD_METHOD_2_87485E36CA0CE0A5_OFFSET UNITYSDK_OFFSET(0x6D09BC0)
#define CLASS_2_483485F7BF870BCD_METHOD_2_93C03310A87F35FD_OFFSET UNITYSDK_OFFSET(0x6D0FC30)
#define CLASS_2_483485F7BF870BCD_METHOD_2_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x6D0E680)
#define CLASS_2_483485F7BF870BCD_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x6D098D0)
#define CLASS_2_483485F7BF870BCD_METHOD_2_A4C9499E519D205D_OFFSET UNITYSDK_OFFSET(0x6D08E60)
#define CLASS_2_483485F7BF870BCD_METHOD_2_A7957CDB95DAF72B_OFFSET UNITYSDK_OFFSET(0x6D09990)
#define CLASS_2_483485F7BF870BCD_METHOD_2_B167400533B0B617_OFFSET UNITYSDK_OFFSET(0x6D0F880)
#define CLASS_2_483485F7BF870BCD_METHOD_2_C83B2479936B63C3_OFFSET UNITYSDK_OFFSET(0x6D0A0D0)
#define CLASS_2_483485F7BF870BCD_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x6D0FCB0)
#define CLASS_2_483485F7BF870BCD_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x6D0FD10)
#define CLASS_2_483485F7BF870BCD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6D0E870)
#define CLASS_2_483485F7BF870BCD_METHOD_2_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x6D0D080)
#define CLASS_2_483485F7BF870BCD_METHOD_2_F80300C484C3F891_OFFSET UNITYSDK_OFFSET(0x6D0F940)
#define CLASS_2_483485F7BF870BCD_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x6D0D710)
#define CLASS_2_483485F7BF870BCD__CTOR_OFFSET UNITYSDK_OFFSET(0x6D0E730)

inline static constexpr unsigned int Class_2_483485F7BF870BCD_TypeDefinitionIndex = 43500;

class Class_2_483485F7BF870BCD : public ::Class_1_C836D00248E6EFFE
{
public:
	::System::String* Field_2_16; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_2_6; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_2_2; // 0x60
	::MoleMole::Battle::Entity* Field_2_3; // 0x68
	::Class_3_883E597458B91E77_1* Field_2_10; // 0x70
	::System::String* Field_2_17; // 0x78
	::Class_3_F33F9DC5F4112336* Field_2_12; // 0x80
	::System::String* Field_2_15; // 0x88
	::Class_3_9AE843FF905C0BDB* Field_2_11; // 0x90
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_2_1; // 0x98
	::Class_3_8FA83DC50C27EB45* Field_2_0; // 0xA0
	::MoleMole::Battle::Entity* Field_2_5; // 0xA8
	::MoleMole::Battle::Entity* Field_2_4; // 0xB0
	::System::Int32 Field_2_7; // 0xB8
	::UnityEngine::Vector3 Field_2_13; // 0xBC
	::System::Boolean Field_2_9; // 0xC8
	::System::Boolean Field_2_18; // 0xC9
	::System::Boolean Field_2_8; // 0xCA
	::System::Boolean Field_2_14; // 0xCB

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A4C9499E519D205D(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_A4C9499E519D205D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_2_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_2_4D70E3D849E4E16D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_4D70E3D849E4E16D_OFFSET))(this, a1);
	}

	::System::Void OnFighter_PropertyValueChanged(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_381A3B5979ADE6D2(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_381A3B5979ADE6D2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_7619D93B61B6E841(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_7619D93B61B6E841_OFFSET))(this, a1, a2, a3, a4);
	}

	::MoleMole::Battle::Entity* Method_2_87485E36CA0CE0A5(::System::String* a1, ::System::Boolean a2)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_87485E36CA0CE0A5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_47680E2642F37A1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_47680E2642F37A1B_OFFSET))(this);
	}

	::System::Void Method_2_93C03310A87F35FD(::Class_3_883E597458B91E77_1* a1, ::Enum_3_1A3450664E1488DB a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_883E597458B91E77_1*, ::Enum_3_1A3450664E1488DB))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_93C03310A87F35FD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_838C5A5961309B55()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_838C5A5961309B55_OFFSET))(this);
	}

	::System::Boolean Method_2_A7957CDB95DAF72B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_A7957CDB95DAF72B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_B167400533B0B617()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_B167400533B0B617_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_F80300C484C3F891(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_F80300C484C3F891_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_412954138AE5DBE9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_412954138AE5DBE9_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_C83B2479936B63C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_483485F7BF870BCD_METHOD_2_C83B2479936B63C3_OFFSET))(this);
	}
};
