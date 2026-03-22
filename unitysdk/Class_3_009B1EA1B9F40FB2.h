#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_009B1EA1B9F40FB2_Enum_3_2DB0C3BA56D2E689.h"
#include "unitysdk/Class_3_009B1EA1B9F40FB2_Struct_2_C79285C075DAFC1C_1.h"

class Class_1_5DA2E7556103D5A3_224;
namespace MoleMole::Level { class LevelConfig_GlobalAIUpgradeParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_009B1EA1B9F40FB2_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x9F56C80)
#define CLASS_3_009B1EA1B9F40FB2_METHOD_3_0E8E4459B26B6D1C_OFFSET UNITYSDK_OFFSET(0x9F57040)
#define CLASS_3_009B1EA1B9F40FB2_METHOD_3_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x9F57030)
#define CLASS_3_009B1EA1B9F40FB2_METHOD_3_4729717C44855B6F_OFFSET UNITYSDK_OFFSET(0x9F57220)
#define CLASS_3_009B1EA1B9F40FB2_METHOD_3_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0x9F57C70)
#define CLASS_3_009B1EA1B9F40FB2_METHOD_3_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x9F58060)
#define CLASS_3_009B1EA1B9F40FB2_METHOD_3_4AB2B25263ADAC0F_OFFSET UNITYSDK_OFFSET(0x9F57620)
#define CLASS_3_009B1EA1B9F40FB2_METHOD_3_5A4F0A1C862255D1_OFFSET UNITYSDK_OFFSET(0x9F57EF0)
#define CLASS_3_009B1EA1B9F40FB2_METHOD_3_5A93A8473B1992CC_OFFSET UNITYSDK_OFFSET(0x9F576E0)
#define CLASS_3_009B1EA1B9F40FB2_METHOD_3_7125A4A2055A7F0D_OFFSET UNITYSDK_OFFSET(0x9F58070)
#define CLASS_3_009B1EA1B9F40FB2_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x9F571B0)
#define CLASS_3_009B1EA1B9F40FB2_METHOD_3_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x9F58100)
#define CLASS_3_009B1EA1B9F40FB2_METHOD_3_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x9F576D0)
#define CLASS_3_009B1EA1B9F40FB2_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x9F57340)
#define CLASS_3_009B1EA1B9F40FB2_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x9F57110)
#define CLASS_3_009B1EA1B9F40FB2_METHOD_3_D4375C75C902FEB6_OFFSET UNITYSDK_OFFSET(0x9F57210)
#define CLASS_3_009B1EA1B9F40FB2_METHOD_3_D998872A065E2E31_OFFSET UNITYSDK_OFFSET(0x9F57350)
#define CLASS_3_009B1EA1B9F40FB2_METHOD_3_E112957D00EDE7F0_OFFSET UNITYSDK_OFFSET(0x9F57EE0)
#define CLASS_3_009B1EA1B9F40FB2_METHOD_3_F1872B84FDE15C95_OFFSET UNITYSDK_OFFSET(0x9F57ED0)
#define CLASS_3_009B1EA1B9F40FB2_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x9F56A60)
#define CLASS_3_009B1EA1B9F40FB2__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F56CE0)
#define CLASS_3_009B1EA1B9F40FB2__CTOR_OFFSET UNITYSDK_OFFSET(0x9F56D60)

inline static constexpr unsigned int Class_3_009B1EA1B9F40FB2_TypeDefinitionIndex = 58534;

class Class_3_009B1EA1B9F40FB2 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_8 = 0xB5; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_009B1EA1B9F40FB2_Enum_3_2DB0C3BA56D2E689>* Field_3_1; // 0x48
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_4; // 0x50
	::System::Collections::Generic::List_1<::Class_3_009B1EA1B9F40FB2_Struct_2_C79285C075DAFC1C_1>* Field_3_7; // 0x58
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_2; // 0x60
	::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_GlobalAIUpgradeParam*>* Field_3_5; // 0x68
	::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_224*>* Field_3_0; // 0x70
	::System::Collections::Generic::List_1<::System::String*>* Field_3_3; // 0x78
	::System::Int32 Field_3_6; // 0x80

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2_GETCLASSID_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_3_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2_METHOD_3_43535ED8A0DF5FF8_OFFSET))(this);
	}

	::System::Void Method_3_0E8E4459B26B6D1C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2_METHOD_3_0E8E4459B26B6D1C_OFFSET))(this, a1);
	}

	static ::Class_3_009B1EA1B9F40FB2* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_009B1EA1B9F40FB2*(*)())((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_D4375C75C902FEB6(::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_GlobalAIUpgradeParam*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_GlobalAIUpgradeParam*>*))((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2_METHOD_3_D4375C75C902FEB6_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_4729717C44855B6F(::System::String* a1, ::Class_3_009B1EA1B9F40FB2_Struct_2_C79285C075DAFC1C_1 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_3_009B1EA1B9F40FB2_Struct_2_C79285C075DAFC1C_1))((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2_METHOD_3_4729717C44855B6F_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_3_D998872A065E2E31(::System::Int32 a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2_METHOD_3_D998872A065E2E31_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2_METHOD_3_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_5A93A8473B1992CC(::System::Int32 a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2_METHOD_3_5A93A8473B1992CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_47EDBC4CA1AB8BEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2_METHOD_3_47EDBC4CA1AB8BEE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_GlobalAIUpgradeParam*>* Method_3_F1872B84FDE15C95()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_GlobalAIUpgradeParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2_METHOD_3_F1872B84FDE15C95_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_009B1EA1B9F40FB2_Struct_2_C79285C075DAFC1C_1>* Method_3_E112957D00EDE7F0()
	{
		return ((::System::Collections::Generic::List_1<::Class_3_009B1EA1B9F40FB2_Struct_2_C79285C075DAFC1C_1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2_METHOD_3_E112957D00EDE7F0_OFFSET))(this);
	}

	::System::Void Method_3_5A4F0A1C862255D1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2_METHOD_3_5A4F0A1C862255D1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_4AB2B25263ADAC0F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2_METHOD_3_4AB2B25263ADAC0F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_224*>* Method_3_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_224*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2_METHOD_3_4993EDAE54425105_OFFSET))(this);
	}

	::System::Void Method_3_7125A4A2055A7F0D(::Class_3_009B1EA1B9F40FB2_Struct_2_C79285C075DAFC1C_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_009B1EA1B9F40FB2_Struct_2_C79285C075DAFC1C_1))((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2_METHOD_3_7125A4A2055A7F0D_OFFSET))(this, a1);
	}

	::System::Void Method_3_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_009B1EA1B9F40FB2_METHOD_3_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}
};
