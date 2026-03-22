#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_1BBFAA1B5EC0AE5D.h"
#include "unitysdk/Enum_3_8711E36030A57C8C.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_04AABD269B0AE5A9;
class Class_1_A2413FF173BBC90D;
namespace MoleMole::Config { class ConfigEntityRunState; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D876E48FF9C586AA_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x8101CF0)
#define CLASS_3_D876E48FF9C586AA_METHOD_3_128774387667156B_OFFSET UNITYSDK_OFFSET(0x8102000)
#define CLASS_3_D876E48FF9C586AA_METHOD_3_1D5C4143EE1D2D7C_OFFSET UNITYSDK_OFFSET(0x8101EA0)
#define CLASS_3_D876E48FF9C586AA_METHOD_3_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0x8101F10)
#define CLASS_3_D876E48FF9C586AA_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x81020A0)
#define CLASS_3_D876E48FF9C586AA_METHOD_3_BA904CAFF6C7217F_OFFSET UNITYSDK_OFFSET(0x8101C10)
#define CLASS_3_D876E48FF9C586AA_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8101E40)
#define CLASS_3_D876E48FF9C586AA_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x8102040)
#define CLASS_3_D876E48FF9C586AA_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8101370)
#define CLASS_3_D876E48FF9C586AA_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x8102100)
#define CLASS_3_D876E48FF9C586AA_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x81017A0)
#define CLASS_3_D876E48FF9C586AA_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x81017B0)
#define CLASS_3_D876E48FF9C586AA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x81013D0)
#define CLASS_3_D876E48FF9C586AA__CCTOR_OFFSET UNITYSDK_OFFSET(0x8101D50)
#define CLASS_3_D876E48FF9C586AA__CTOR_OFFSET UNITYSDK_OFFSET(0x8101DD0)

inline static constexpr unsigned int Class_3_D876E48FF9C586AA_TypeDefinitionIndex = 59926;

class Class_3_D876E48FF9C586AA : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Single Field_3_2; // 0x0
	// static const ::System::Int32 Field_3_13 = 0x97; // 0x0
	::Class_1_04AABD269B0AE5A9* Field_3_0; // 0x48
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::Class_1_A2413FF173BBC90D*>* Field_3_6; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_3_9; // 0x58
	::MoleMole::Config::ConfigEntityRunState* Field_3_12; // 0x60
	::System::Single Field_3_11; // 0x68
	::System::Boolean Field_3_1; // 0x6C
	::System::Boolean Field_3_7; // 0x6D
	::System::Boolean Field_3_8; // 0x6E
	::Enum_3_8711E36030A57C8C Field_3_5; // 0x70
	::System::Single Field_3_4; // 0x74
	::Enum_3_1BBFAA1B5EC0AE5D Field_3_3; // 0x78
	::System::Single Field_3_10; // 0x7C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D876E48FF9C586AA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D876E48FF9C586AA__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D876E48FF9C586AA_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D876E48FF9C586AA_TOSTRING_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D876E48FF9C586AA_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D876E48FF9C586AA_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D876E48FF9C586AA_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D876E48FF9C586AA_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::MoleMole::Config::AnimMoveState Method_3_1D5C4143EE1D2D7C()
	{
		return ((::MoleMole::Config::AnimMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D876E48FF9C586AA_METHOD_3_1D5C4143EE1D2D7C_OFFSET))(this);
	}

	static ::Class_3_D876E48FF9C586AA* Method_3_323F95926A2F616E()
	{
		return ((::Class_3_D876E48FF9C586AA*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D876E48FF9C586AA_METHOD_3_323F95926A2F616E_OFFSET))();
	}

	::System::String* Method_3_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D876E48FF9C586AA_METHOD_3_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D876E48FF9C586AA_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_BA904CAFF6C7217F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D876E48FF9C586AA_METHOD_3_BA904CAFF6C7217F_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D876E48FF9C586AA_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D876E48FF9C586AA_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
