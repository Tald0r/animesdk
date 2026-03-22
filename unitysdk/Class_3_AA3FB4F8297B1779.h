#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_215506A3B8D5C27F.h"
#include "unitysdk/Struct_2_5887222B9AE38D34_3.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

class Class_1_CB7F0487F7A6164A;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_AA3FB4F8297B1779_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x9589270)
#define CLASS_3_AA3FB4F8297B1779_METHOD_3_0F56D5DC9847C4D5_OFFSET UNITYSDK_OFFSET(0x9589390)
#define CLASS_3_AA3FB4F8297B1779_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x9589460)
#define CLASS_3_AA3FB4F8297B1779_METHOD_3_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x9589720)
#define CLASS_3_AA3FB4F8297B1779_METHOD_3_8E007DA9036887B2_OFFSET UNITYSDK_OFFSET(0x95894F0)
#define CLASS_3_AA3FB4F8297B1779_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x9589780)
#define CLASS_3_AA3FB4F8297B1779_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x95893A0)
#define CLASS_3_AA3FB4F8297B1779_METHOD_3_E3044C8564941869_OFFSET UNITYSDK_OFFSET(0x9589740)
#define CLASS_3_AA3FB4F8297B1779_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x95891B0)
#define CLASS_3_AA3FB4F8297B1779__CCTOR_OFFSET UNITYSDK_OFFSET(0x95892D0)
#define CLASS_3_AA3FB4F8297B1779__CTOR_OFFSET UNITYSDK_OFFSET(0x9589350)

inline static constexpr unsigned int Class_3_AA3FB4F8297B1779_TypeDefinitionIndex = 68037;

class Class_3_AA3FB4F8297B1779 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Single Field_3_0; // 0x0
	// static const ::System::Single Field_3_1; // 0x0
	// static const ::System::Single Field_3_2; // 0x0
	// static const ::System::Single Field_3_3; // 0x0
	// static const ::System::Single Field_3_4; // 0x0
	// static const ::System::Int32 Field_3_12 = 0x1A; // 0x0
	::System::Collections::Generic::List_1<::Struct_2_5887222B9AE38D34_3>* Field_3_11; // 0x48
	::System::String* Field_3_9; // 0x50
	::Struct_2_FA5F50563E60AFBA Field_3_8; // 0x58
	::System::Single Field_3_6; // 0x70
	::System::Single Field_3_5; // 0x74
	::Enum_3_215506A3B8D5C27F Field_3_10; // 0x78
	::System::Boolean Field_3_7; // 0x7C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AA3FB4F8297B1779__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA3FB4F8297B1779__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA3FB4F8297B1779_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA3FB4F8297B1779_GETCLASSID_OFFSET))(this);
	}

	::Class_1_CB7F0487F7A6164A* Method_3_0F56D5DC9847C4D5()
	{
		return ((::Class_1_CB7F0487F7A6164A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA3FB4F8297B1779_METHOD_3_0F56D5DC9847C4D5_OFFSET))(this);
	}

	static ::Class_3_AA3FB4F8297B1779* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_AA3FB4F8297B1779*(*)())((::PBYTE)hIl2Cpp + CLASS_3_AA3FB4F8297B1779_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA3FB4F8297B1779_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_3_8E007DA9036887B2(::Struct_2_FA5F50563E60AFBA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + CLASS_3_AA3FB4F8297B1779_METHOD_3_8E007DA9036887B2_OFFSET))(this, a1);
	}

	::Struct_2_FA5F50563E60AFBA Method_3_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA3FB4F8297B1779_METHOD_3_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_E3044C8564941869()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA3FB4F8297B1779_METHOD_3_E3044C8564941869_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA3FB4F8297B1779_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
