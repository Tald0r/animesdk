#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C974D9B5A2874893.h"
#include "unitysdk/Enum_3_B90C1A15EA6E3C2B.h"

class Class_1_4F6239066972E045;
class Class_1_A786FAE94FAE1C1D;
class SceneObjectTrafficLightConfig;
class TrafficRedLimitArea;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_04F02FC65FAA2E0C_OFFSET UNITYSDK_OFFSET(0x6C6D030)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_18D019F652B00D4D_1_OFFSET UNITYSDK_OFFSET(0x6C6F170)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_18D019F652B00D4D_OFFSET UNITYSDK_OFFSET(0x6C6D020)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_2C2CE78411D128F1_OFFSET UNITYSDK_OFFSET(0x6C6F520)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x6C6E9A0)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x6C6CEE0)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_4264339CF84D35E3_OFFSET UNITYSDK_OFFSET(0x6C6CAC0)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_4EABA0671C5D4363_OFFSET UNITYSDK_OFFSET(0x6C6CDD0)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_5278549FF1724E66_1_OFFSET UNITYSDK_OFFSET(0x6C6F160)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_5278549FF1724E66_OFFSET UNITYSDK_OFFSET(0x6C6F150)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x6C6F700)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_84EAB34EABC7F508_OFFSET UNITYSDK_OFFSET(0x6C6EAD0)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_97BE07E876064FAC_OFFSET UNITYSDK_OFFSET(0x6C6E2A0)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_9D8EF9AD3B13BD0E_OFFSET UNITYSDK_OFFSET(0x6C6C2B0)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x6C6EDB0)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x6C6C080)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_A5B41C702743BA58_OFFSET UNITYSDK_OFFSET(0x6C6EF40)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_AD08FBD268009D6F_OFFSET UNITYSDK_OFFSET(0x6C6E190)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x6C6C9E0)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_B64E6D35718AD10A_OFFSET UNITYSDK_OFFSET(0x6C6F710)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_BBF4A547D7671F86_OFFSET UNITYSDK_OFFSET(0x6C6C3C0)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_C8EED11299FD17DB_OFFSET UNITYSDK_OFFSET(0x6C6F1E0)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x6C6F180)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6C6EE40)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x6C6EEA0)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x6C6BD90)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_F7300E87EC49A206_1_OFFSET UNITYSDK_OFFSET(0x6C6F8C0)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x6C6E770)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_FBAC2F70799E5CFB_1_OFFSET UNITYSDK_OFFSET(0x6C6E5F0)
#define CLASS_2_0D5E5AF6168A09C7_METHOD_2_FBAC2F70799E5CFB_OFFSET UNITYSDK_OFFSET(0x6C6E470)
#define CLASS_2_0D5E5AF6168A09C7__CTOR_OFFSET UNITYSDK_OFFSET(0x6C6C810)

inline static constexpr unsigned int Class_2_0D5E5AF6168A09C7_TypeDefinitionIndex = 43250;

class Class_2_0D5E5AF6168A09C7 : public ::Class_1_C974D9B5A2874893
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_2_12; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_11; // 0x30
	::System::String* Field_2_1; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_2_14; // 0x40
	::System::Collections::Generic::List_1<::Enum_3_B90C1A15EA6E3C2B>* Field_2_20; // 0x48
	::System::String* Field_2_16; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_2_13; // 0x58
	::Class_1_4F6239066972E045* Field_2_9; // 0x60
	::SceneObjectTrafficLightConfig* Field_2_7; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_A786FAE94FAE1C1D*>* Field_2_15; // 0x70
	::System::Boolean Field_2_10; // 0x78
	::System::Boolean Field_2_0; // 0x79
	::System::Boolean Field_2_6; // 0x7A
	::System::Boolean Field_2_17; // 0x7B
	::System::Int32 Field_2_8; // 0x7C
	::System::Int32 Field_2_5; // 0x80
	::System::Int32 Field_2_19; // 0x84
	::System::Int32 Field_2_2; // 0x88
	::System::Single Field_2_4; // 0x8C
	::System::Single Field_2_3; // 0x90
	::System::Int32 Field_2_18; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Void Method_2_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Void Method_2_9D8EF9AD3B13BD0E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_9D8EF9AD3B13BD0E_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::Class_1_A786FAE94FAE1C1D* Method_2_4EABA0671C5D4363(::System::Int32 a1)
	{
		return ((::Class_1_A786FAE94FAE1C1D*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_4EABA0671C5D4363_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_18D019F652B00D4D(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_18D019F652B00D4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_4264339CF84D35E3(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_4264339CF84D35E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AD08FBD268009D6F(::TrafficRedLimitArea* a1)
	{
		return ((::System::Void(*)(::PVOID, ::TrafficRedLimitArea*))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_AD08FBD268009D6F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_97BE07E876064FAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_97BE07E876064FAC_OFFSET))(this);
	}

	::System::Void Method_2_FBAC2F70799E5CFB(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_FBAC2F70799E5CFB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FBAC2F70799E5CFB_1(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_FBAC2F70799E5CFB_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Boolean Method_2_84EAB34EABC7F508()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_84EAB34EABC7F508_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A5B41C702743BA58(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_A5B41C702743BA58_OFFSET))(this, a1);
	}

	::System::Void Method_2_BBF4A547D7671F86(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_BBF4A547D7671F86_OFFSET))(this, a1);
	}

	::System::Void Method_2_04F02FC65FAA2E0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_04F02FC65FAA2E0C_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Method_2_5278549FF1724E66()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_5278549FF1724E66_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Method_2_5278549FF1724E66_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_5278549FF1724E66_1_OFFSET))(this);
	}

	::System::Void Method_2_18D019F652B00D4D_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_18D019F652B00D4D_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_C8EED11299FD17DB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_C8EED11299FD17DB_OFFSET))(this);
	}

	::System::Void Method_2_2C2CE78411D128F1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_2C2CE78411D128F1_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_B64E6D35718AD10A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_B64E6D35718AD10A_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7300E87EC49A206_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5E5AF6168A09C7_METHOD_2_F7300E87EC49A206_1_OFFSET))(this);
	}
};
