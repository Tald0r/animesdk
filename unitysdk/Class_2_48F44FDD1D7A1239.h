#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03F99CB57102F7C2.h"
#include "unitysdk/Enum_3_19B86966374B66F3.h"
#include "unitysdk/Enum_3_39A9A0109BB4AB63.h"
#include "unitysdk/Enum_3_3AEF4512D78B29D1_1.h"
#include "unitysdk/Enum_3_3B1F5BF4ACBF54F8.h"
#include "unitysdk/Enum_3_77ADBA378EFC2D41.h"
#include "unitysdk/Enum_3_B462E4FD22710CD6.h"
#include "unitysdk/Enum_3_C2B51C76D0445C56.h"
#include "unitysdk/Enum_3_F2E2330023033AF3.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Struct_2_333D68058B10D010.h"
#include "unitysdk/Struct_2_5DC1F047D4EA2A30.h"
#include "unitysdk/Struct_2_928A3C549784FC92.h"
#include "unitysdk/Struct_2_93287567E916A51C.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0517B48635C9D397;
class Class_1_2B9207E1BEA1F276;
class Class_2_0E3D561C72111316;
class Class_2_A1E11F94C1500ACE;
namespace MoleMole { class UICinemaPlayPageController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_48F44FDD1D7A1239_METHOD_2_093804EF61CBEA5B_OFFSET UNITYSDK_OFFSET(0x82676A0)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_097A5EFFC526DF5B_OFFSET UNITYSDK_OFFSET(0x8268CD0)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_0D5DAEBB298719E2_OFFSET UNITYSDK_OFFSET(0x8267E40)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_15A3B8D301372F95_OFFSET UNITYSDK_OFFSET(0x8267370)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_1B3C81B1087500AF_OFFSET UNITYSDK_OFFSET(0x8266610)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x8268630)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_1F7D2BEEBAD3A714_OFFSET UNITYSDK_OFFSET(0x8269000)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_20B42E70A5575285_OFFSET UNITYSDK_OFFSET(0x8267C20)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_27CA66CE8164322A_OFFSET UNITYSDK_OFFSET(0x826A020)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_2D9D5F993B7F4D1B_OFFSET UNITYSDK_OFFSET(0x8266700)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_2E6323DC3A73158B_OFFSET UNITYSDK_OFFSET(0x8267720)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_30EF761DC6D3890B_OFFSET UNITYSDK_OFFSET(0x8269110)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x82688D0)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_34E015E8658F7193_OFFSET UNITYSDK_OFFSET(0x8266C10)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_36AB19EF03551C78_OFFSET UNITYSDK_OFFSET(0x8268A70)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_3BE5DBAE268F9022_OFFSET UNITYSDK_OFFSET(0x82697B0)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x8268750)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_48FBDEF7B357C3A6_OFFSET UNITYSDK_OFFSET(0x8266DC0)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_5207B2A3400FFFF1_OFFSET UNITYSDK_OFFSET(0x8266360)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_55484EF4E95441F7_OFFSET UNITYSDK_OFFSET(0x8269EA0)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_5DCF10546C64B8AD_OFFSET UNITYSDK_OFFSET(0x8269450)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_627A43057F5DEAED_OFFSET UNITYSDK_OFFSET(0x82689D0)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_63F6CBD99F634077_OFFSET UNITYSDK_OFFSET(0x8268120)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_691A1C2F360A8C86_OFFSET UNITYSDK_OFFSET(0x8268DE0)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_6DF1EF25D234AF46_OFFSET UNITYSDK_OFFSET(0x82691A0)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_70484F0C4668EBF2_OFFSET UNITYSDK_OFFSET(0x8269270)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_7284AC19E3F3A141_OFFSET UNITYSDK_OFFSET(0x8269C00)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x8266D40)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_754003012259DA16_OFFSET UNITYSDK_OFFSET(0x8266EE0)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_82FFE263BE5570A5_OFFSET UNITYSDK_OFFSET(0x82665A0)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x8267690)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_880658A3F2B6561B_OFFSET UNITYSDK_OFFSET(0x8266500)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_880AA157D4E82435_1_OFFSET UNITYSDK_OFFSET(0x8269B40)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_880AA157D4E82435_OFFSET UNITYSDK_OFFSET(0x8268E60)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_8DCF15AB7598259E_OFFSET UNITYSDK_OFFSET(0x82685B0)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_9034F9F27046CDCC_OFFSET UNITYSDK_OFFSET(0x82686D0)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_99C84E04E71E4DAC_OFFSET UNITYSDK_OFFSET(0x8269630)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x8267400)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_9D2D56060C4828AD_OFFSET UNITYSDK_OFFSET(0x826A220)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_9EA88BC1D9056365_OFFSET UNITYSDK_OFFSET(0x8266440)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_A8E1DE2CAE1CBEEE_OFFSET UNITYSDK_OFFSET(0x82677C0)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_AFA462B1BD741405_OFFSET UNITYSDK_OFFSET(0x8267CC0)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8269560)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_B6A76229F61F0E6A_OFFSET UNITYSDK_OFFSET(0x8268F20)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_BAE91AA2A105A81A_OFFSET UNITYSDK_OFFSET(0x8266280)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x82694E0)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_C5667B7AF7D1A7EA_OFFSET UNITYSDK_OFFSET(0x8269C90)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_CA80A1E6222E1C6F_OFFSET UNITYSDK_OFFSET(0x8266680)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_D39DC7CE639D9F1F_OFFSET UNITYSDK_OFFSET(0x8268020)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_E0E6F8EA1D6A3E59_OFFSET UNITYSDK_OFFSET(0x8267F90)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_E1AFCF8D1C7569F1_OFFSET UNITYSDK_OFFSET(0x8268BE0)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_E7C22E8F6B5BA197_OFFSET UNITYSDK_OFFSET(0x8266840)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_F2A1D3C2AD5054B1_OFFSET UNITYSDK_OFFSET(0x8269DD0)
#define CLASS_2_48F44FDD1D7A1239_METHOD_2_F933B199788A325A_OFFSET UNITYSDK_OFFSET(0x826A170)
#define CLASS_2_48F44FDD1D7A1239_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x8266210)
#define CLASS_2_48F44FDD1D7A1239__CTOR_OFFSET UNITYSDK_OFFSET(0x8266DB0)

inline static constexpr unsigned int Class_2_48F44FDD1D7A1239_TypeDefinitionIndex = 71225;

class Class_2_48F44FDD1D7A1239 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_48F44FDD1D7A1239*>
{
public:
	::Class_2_0E3D561C72111316* Field_2_2; // 0x20
	::MoleMole::UICinemaPlayPageController* Field_2_0; // 0x28
	::Class_2_A1E11F94C1500ACE* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_2_BAE91AA2A105A81A(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_BAE91AA2A105A81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5207B2A3400FFFF1(::Struct_2_333D68058B10D010 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_333D68058B10D010))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_5207B2A3400FFFF1_OFFSET))(this, a1);
	}

	::System::Void Method_2_9EA88BC1D9056365(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_9EA88BC1D9056365_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_880658A3F2B6561B(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_880658A3F2B6561B_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_2_82FFE263BE5570A5(::Enum_3_3AEF4512D78B29D1_1 a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::Enum_3_3AEF4512D78B29D1_1))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_82FFE263BE5570A5_OFFSET))(this, a1);
	}

	::Class_1_0517B48635C9D397* Method_2_1B3C81B1087500AF(::Enum_3_3AEF4512D78B29D1_1 a1)
	{
		return ((::Class_1_0517B48635C9D397*(*)(::PVOID, ::Enum_3_3AEF4512D78B29D1_1))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_1B3C81B1087500AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA80A1E6222E1C6F(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_CA80A1E6222E1C6F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2D9D5F993B7F4D1B(::Class_1_0517B48635C9D397* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0517B48635C9D397*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_2D9D5F993B7F4D1B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_E7C22E8F6B5BA197(::System::String* a1, ::System::Single a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_E7C22E8F6B5BA197_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_34E015E8658F7193(::Struct_2_93287567E916A51C a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_93287567E916A51C))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_34E015E8658F7193_OFFSET))(this, a1);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_48FBDEF7B357C3A6(::Enum_3_03F99CB57102F7C2 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_03F99CB57102F7C2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_48FBDEF7B357C3A6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_754003012259DA16(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Boolean a4, ::System::Action* a5, ::System::Action* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_754003012259DA16_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_15A3B8D301372F95(::System::Int32 a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_15A3B8D301372F95_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_093804EF61CBEA5B(::Enum_3_F2E2330023033AF3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F2E2330023033AF3))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_093804EF61CBEA5B_OFFSET))(this, a1);
	}

	::System::Void Method_2_2E6323DC3A73158B(::System::Int32& a1, ::Enum_3_77ADBA378EFC2D41& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&, ::Enum_3_77ADBA378EFC2D41&))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_2E6323DC3A73158B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A8E1DE2CAE1CBEEE(::Enum_3_39A9A0109BB4AB63 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_39A9A0109BB4AB63, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_A8E1DE2CAE1CBEEE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_20B42E70A5575285(::System::Int32 a1, ::System::String* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_20B42E70A5575285_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AFA462B1BD741405(::Enum_3_B462E4FD22710CD6 a1, ::Enum_3_3AEF4512D78B29D1_1 a2, ::Enum_3_3AEF4512D78B29D1_1 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_B462E4FD22710CD6, ::Enum_3_3AEF4512D78B29D1_1, ::Enum_3_3AEF4512D78B29D1_1))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_AFA462B1BD741405_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0D5DAEBB298719E2(::Enum_3_3AEF4512D78B29D1_1 a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3AEF4512D78B29D1_1, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_0D5DAEBB298719E2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_E0E6F8EA1D6A3E59(::System::Int32 a1, ::System::Boolean a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_E0E6F8EA1D6A3E59_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D39DC7CE639D9F1F(::Enum_3_3AEF4512D78B29D1_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3AEF4512D78B29D1_1))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_D39DC7CE639D9F1F_OFFSET))(this, a1);
	}

	::System::Void Method_2_63F6CBD99F634077(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3, ::System::Single a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_63F6CBD99F634077_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_8DCF15AB7598259E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_8DCF15AB7598259E_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_9034F9F27046CDCC(::Struct_2_928A3C549784FC92 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_928A3C549784FC92))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_9034F9F27046CDCC_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_32B2368221A04800_OFFSET))(this, a1);
	}

	::System::Void Method_2_627A43057F5DEAED(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_627A43057F5DEAED_OFFSET))(this, a1);
	}

	::System::Void Method_2_36AB19EF03551C78(::Enum_3_3AEF4512D78B29D1_1 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3AEF4512D78B29D1_1, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_36AB19EF03551C78_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E1AFCF8D1C7569F1(::MoleMole::UICinemaPlayPageController* a1, ::Class_1_2B9207E1BEA1F276* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICinemaPlayPageController*, ::Class_1_2B9207E1BEA1F276*))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_E1AFCF8D1C7569F1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_097A5EFFC526DF5B(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_097A5EFFC526DF5B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_691A1C2F360A8C86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_691A1C2F360A8C86_OFFSET))(this);
	}

	::System::Void Method_2_880AA157D4E82435(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Single>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_880AA157D4E82435_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B6A76229F61F0E6A(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_B6A76229F61F0E6A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1F7D2BEEBAD3A714(::System::Single a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_1F7D2BEEBAD3A714_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_30EF761DC6D3890B(::System::Collections::Generic::List_1<::System::Single>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_30EF761DC6D3890B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6DF1EF25D234AF46(::Struct_2_5DC1F047D4EA2A30 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_5DC1F047D4EA2A30))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_6DF1EF25D234AF46_OFFSET))(this, a1);
	}

	::System::Void Method_2_70484F0C4668EBF2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_70484F0C4668EBF2_OFFSET))(this);
	}

	::System::Void Method_2_5DCF10546C64B8AD(::Enum_3_3B1F5BF4ACBF54F8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3B1F5BF4ACBF54F8))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_5DCF10546C64B8AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_99C84E04E71E4DAC(::Enum_3_C2B51C76D0445C56 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_C2B51C76D0445C56))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_99C84E04E71E4DAC_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BE5DBAE268F9022()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_3BE5DBAE268F9022_OFFSET))(this);
	}

	::System::Void Method_2_880AA157D4E82435_1(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Single>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_880AA157D4E82435_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7284AC19E3F3A141(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_7284AC19E3F3A141_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C5667B7AF7D1A7EA(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_C5667B7AF7D1A7EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F2A1D3C2AD5054B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_F2A1D3C2AD5054B1_OFFSET))(this);
	}

	::System::Void Method_2_55484EF4E95441F7(::Enum_3_3AEF4512D78B29D1_1 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3AEF4512D78B29D1_1, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_55484EF4E95441F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_27CA66CE8164322A(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_27CA66CE8164322A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F933B199788A325A(::System::String* a1, ::System::String* a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_F933B199788A325A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9D2D56060C4828AD(::Enum_3_19B86966374B66F3 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_19B86966374B66F3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_48F44FDD1D7A1239_METHOD_2_9D2D56060C4828AD_OFFSET))(this, a1, a2);
	}
};
