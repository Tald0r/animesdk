#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_1BBFAA1B5EC0AE5D.h"
#include "unitysdk/Enum_3_8711E36030A57C8C.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_04AABD269B0AE5A9;
class Class_1_A2413FF173BBC90D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_AB70F28E05C9F5C5_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xA6A1E90)
#define CLASS_3_AB70F28E05C9F5C5_METHOD_3_128774387667156B_OFFSET UNITYSDK_OFFSET(0xA6A21B0)
#define CLASS_3_AB70F28E05C9F5C5_METHOD_3_1D5C4143EE1D2D7C_OFFSET UNITYSDK_OFFSET(0xA6A1FE0)
#define CLASS_3_AB70F28E05C9F5C5_METHOD_3_486AF1E6C0038D4C_OFFSET UNITYSDK_OFFSET(0xA6A2070)
#define CLASS_3_AB70F28E05C9F5C5_METHOD_3_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0xA6A2200)
#define CLASS_3_AB70F28E05C9F5C5_METHOD_3_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0xA6A20F0)
#define CLASS_3_AB70F28E05C9F5C5_METHOD_3_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xA6A20E0)
#define CLASS_3_AB70F28E05C9F5C5_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xA6A1F80)
#define CLASS_3_AB70F28E05C9F5C5_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA6A2080)
#define CLASS_3_AB70F28E05C9F5C5_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA6A19B0)
#define CLASS_3_AB70F28E05C9F5C5_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xA6A2100)
#define CLASS_3_AB70F28E05C9F5C5_METHOD_3_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0xA6A2050)
#define CLASS_3_AB70F28E05C9F5C5_METHOD_3_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0xA6A21F0)
#define CLASS_3_AB70F28E05C9F5C5_METHOD_3_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0xA6A21A0)
#define CLASS_3_AB70F28E05C9F5C5_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA6A1E80)
#define CLASS_3_AB70F28E05C9F5C5_METHOD_3_FF798D152DDA9A15_OFFSET UNITYSDK_OFFSET(0xA6A2220)
#define CLASS_3_AB70F28E05C9F5C5_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xA6A1380)
#define CLASS_3_AB70F28E05C9F5C5_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA6A1A10)
#define CLASS_3_AB70F28E05C9F5C5__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6A1EF0)
#define CLASS_3_AB70F28E05C9F5C5__CTOR_OFFSET UNITYSDK_OFFSET(0xA6A1F70)

inline static constexpr unsigned int Class_3_AB70F28E05C9F5C5_TypeDefinitionIndex = 68280;

class Class_3_AB70F28E05C9F5C5 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Single Field_3_2; // 0x0
	// static const ::System::Int32 Field_3_17 = 0x25; // 0x0
	::System::String* Field_3_13; // 0x48
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::Class_1_A2413FF173BBC90D*>* Field_3_8; // 0x50
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::Collections::Generic::List_1<::System::String*>*>* Field_3_9; // 0x58
	::Class_1_04AABD269B0AE5A9* Field_3_3; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* Field_3_11; // 0x68
	::System::String* Field_3_10; // 0x70
	::Enum_3_1BBFAA1B5EC0AE5D Field_3_4; // 0x78
	::System::Single Field_3_7; // 0x7C
	::UnityEngine::Vector2 Field_3_15; // 0x80
	::System::Single Field_3_16; // 0x88
	::System::Single Field_3_5; // 0x8C
	::System::Boolean Field_3_12; // 0x90
	::System::Boolean Field_3_1; // 0x91
	::System::Boolean Field_3_0; // 0x92
	::Enum_3_8711E36030A57C8C Field_3_6; // 0x94
	::UnityEngine::Vector3 Field_3_14; // 0x98

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AB70F28E05C9F5C5__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB70F28E05C9F5C5__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB70F28E05C9F5C5_ONCLEAN_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB70F28E05C9F5C5_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB70F28E05C9F5C5_TOSTRING_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB70F28E05C9F5C5_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB70F28E05C9F5C5_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::MoleMole::Config::AnimMoveState Method_3_1D5C4143EE1D2D7C()
	{
		return ((::MoleMole::Config::AnimMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB70F28E05C9F5C5_METHOD_3_1D5C4143EE1D2D7C_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB70F28E05C9F5C5_METHOD_3_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_3_486AF1E6C0038D4C()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB70F28E05C9F5C5_METHOD_3_486AF1E6C0038D4C_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB70F28E05C9F5C5_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Single Method_3_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB70F28E05C9F5C5_METHOD_3_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_3_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB70F28E05C9F5C5_METHOD_3_5323F2DF46A044DA_1_OFFSET))(this);
	}

	static ::Class_3_AB70F28E05C9F5C5* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_AB70F28E05C9F5C5*(*)())((::PBYTE)hIl2Cpp + CLASS_3_AB70F28E05C9F5C5_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AB70F28E05C9F5C5_METHOD_3_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::String* Method_3_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB70F28E05C9F5C5_METHOD_3_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_3_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AB70F28E05C9F5C5_METHOD_3_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_AB70F28E05C9F5C5_METHOD_3_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Void Method_3_FF798D152DDA9A15(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_AB70F28E05C9F5C5_METHOD_3_FF798D152DDA9A15_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB70F28E05C9F5C5_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}
};
