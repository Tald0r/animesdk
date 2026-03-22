#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_94EF767DB88BCE69.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/Struct_2_3AAA09564DC7733E.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_36;
class Class_1_91E71DDCF754E6A2;
namespace MoleMole::Config { class ConfigChessboardFilter; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_1_92233056D4AA433B_METHOD_1_067C1326F0892759_OFFSET UNITYSDK_OFFSET(0x7E278F0)
#define CLASS_1_92233056D4AA433B_METHOD_1_0A2C7117DA59C1CD_OFFSET UNITYSDK_OFFSET(0x7E28470)
#define CLASS_1_92233056D4AA433B_METHOD_1_1A25D14E9139ACB0_OFFSET UNITYSDK_OFFSET(0x7E273D0)
#define CLASS_1_92233056D4AA433B_METHOD_1_2E13FD404BD03F5F_OFFSET UNITYSDK_OFFSET(0x7E27C30)
#define CLASS_1_92233056D4AA433B_METHOD_1_48021046C8547C21_OFFSET UNITYSDK_OFFSET(0x7E28230)
#define CLASS_1_92233056D4AA433B_METHOD_1_490CF9B24F02BA36_OFFSET UNITYSDK_OFFSET(0x7E26CD0)
#define CLASS_1_92233056D4AA433B_METHOD_1_63EE0B85571BB920_OFFSET UNITYSDK_OFFSET(0x7E265B0)
#define CLASS_1_92233056D4AA433B_METHOD_1_72522B04A308EC6C_OFFSET UNITYSDK_OFFSET(0x7E26EA0)
#define CLASS_1_92233056D4AA433B_METHOD_1_7CACD99999C9F98F_OFFSET UNITYSDK_OFFSET(0x7E287F0)
#define CLASS_1_92233056D4AA433B_METHOD_1_801231E37F2C7F58_OFFSET UNITYSDK_OFFSET(0x7E25CA0)
#define CLASS_1_92233056D4AA433B_METHOD_1_8349E000AF074CBD_OFFSET UNITYSDK_OFFSET(0x7E269F0)
#define CLASS_1_92233056D4AA433B_METHOD_1_8C19E224D01386FB_OFFSET UNITYSDK_OFFSET(0x7E27E30)
#define CLASS_1_92233056D4AA433B_METHOD_1_A1F098720017518E_OFFSET UNITYSDK_OFFSET(0x7E26430)
#define CLASS_1_92233056D4AA433B_METHOD_1_A4D101D691E0188A_OFFSET UNITYSDK_OFFSET(0x7E27750)
#define CLASS_1_92233056D4AA433B_METHOD_1_B267DDAB46C1880F_OFFSET UNITYSDK_OFFSET(0x7E274C0)
#define CLASS_1_92233056D4AA433B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7E28790)
#define CLASS_1_92233056D4AA433B_METHOD_1_DF2277BFD6B3DB0B_OFFSET UNITYSDK_OFFSET(0x7E27FA0)
#define CLASS_1_92233056D4AA433B_METHOD_1_FDA99477C848DA96_OFFSET UNITYSDK_OFFSET(0x7E267D0)
#define CLASS_1_92233056D4AA433B__CTOR_OFFSET UNITYSDK_OFFSET(0x7E25250)

inline static constexpr unsigned int Class_1_92233056D4AA433B_TypeDefinitionIndex = 59685;

class Class_1_92233056D4AA433B : public ::System::Object
{
public:
	static ::System::UInt64* StaticGet_Field_1_7()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(Class_1_92233056D4AA433B_TypeDefinitionIndex)->GetStaticField(0x10920);
	}
	::MoleMole::Config::ConfigChessboardFilter* Field_1_5; // 0x10
	::System::String* Field_1_4; // 0x18
	::MoleMole::Config::ConfigHollowChessboard* Field_1_6; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::Config::ScreenEffectType>* Field_1_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ScreenEffectType, ::System::Collections::Generic::List_1<::Struct_2_3AAA09564DC7733E>*>* Field_1_3; // 0x30
	::UnityEngine::Rendering::Volume* Field_1_1; // 0x38
	::UnityEngine::Rendering::Volume* Field_1_0; // 0x40

	::System::Void _ctor(::UnityEngine::Rendering::Volume* a1, ::UnityEngine::Rendering::Volume* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_92233056D4AA433B__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_91E71DDCF754E6A2* Method_1_801231E37F2C7F58(::System::Collections::Generic::IDictionary_2<::MoleMole::Config::ScreenEffectType, ::System::String*>* a1, ::Enum_3_94EF767DB88BCE69 a2, ::Class_1_43BD383C98B4C0C5_36* a3)
	{
		return ((::Class_1_91E71DDCF754E6A2*(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::MoleMole::Config::ScreenEffectType, ::System::String*>*, ::Enum_3_94EF767DB88BCE69, ::Class_1_43BD383C98B4C0C5_36*))((::PBYTE)hIl2Cpp + CLASS_1_92233056D4AA433B_METHOD_1_801231E37F2C7F58_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_490CF9B24F02BA36(::Struct_2_3AAA09564DC7733E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3AAA09564DC7733E))((::PBYTE)hIl2Cpp + CLASS_1_92233056D4AA433B_METHOD_1_490CF9B24F02BA36_OFFSET))(this, a1);
	}

	::Foundation::Coroutine::CoroutineHandle Method_1_72522B04A308EC6C(::System::Collections::Generic::IDictionary_2<::MoleMole::Config::ScreenEffectType, ::System::String*>* a1, ::System::Single a2, ::System::Action* a3)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::MoleMole::Config::ScreenEffectType, ::System::String*>*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_92233056D4AA433B_METHOD_1_72522B04A308EC6C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A1F098720017518E(::MoleMole::Config::ScreenEffectType a1, ::Enum_3_94EF767DB88BCE69 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::Enum_3_94EF767DB88BCE69))((::PBYTE)hIl2Cpp + CLASS_1_92233056D4AA433B_METHOD_1_A1F098720017518E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B267DDAB46C1880F(::Enum_3_94EF767DB88BCE69 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_94EF767DB88BCE69))((::PBYTE)hIl2Cpp + CLASS_1_92233056D4AA433B_METHOD_1_B267DDAB46C1880F_OFFSET))(this, a1);
	}

	::System::Void Method_1_A4D101D691E0188A(::Class_1_91E71DDCF754E6A2* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_91E71DDCF754E6A2*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92233056D4AA433B_METHOD_1_A4D101D691E0188A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2E13FD404BD03F5F(::System::String* a1, ::Enum_3_94EF767DB88BCE69 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_94EF767DB88BCE69, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92233056D4AA433B_METHOD_1_2E13FD404BD03F5F_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_3AAA09564DC7733E Method_1_63EE0B85571BB920(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2, ::Enum_3_94EF767DB88BCE69 a3, ::Class_1_43BD383C98B4C0C5_36* a4)
	{
		return ((::Struct_2_3AAA09564DC7733E(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::Enum_3_94EF767DB88BCE69, ::Class_1_43BD383C98B4C0C5_36*))((::PBYTE)hIl2Cpp + CLASS_1_92233056D4AA433B_METHOD_1_63EE0B85571BB920_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_8C19E224D01386FB(::Class_1_91E71DDCF754E6A2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_91E71DDCF754E6A2*))((::PBYTE)hIl2Cpp + CLASS_1_92233056D4AA433B_METHOD_1_8C19E224D01386FB_OFFSET))(this, a1);
	}

	::Struct_2_3AAA09564DC7733E Method_1_DF2277BFD6B3DB0B(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::Struct_2_3AAA09564DC7733E(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_92233056D4AA433B_METHOD_1_DF2277BFD6B3DB0B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_FDA99477C848DA96(::MoleMole::Config::ScreenEffectType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_1_92233056D4AA433B_METHOD_1_FDA99477C848DA96_OFFSET))(this, a1);
	}

	::System::Void Method_1_48021046C8547C21(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92233056D4AA433B_METHOD_1_48021046C8547C21_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_067C1326F0892759(::Struct_2_3AAA09564DC7733E a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3AAA09564DC7733E, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92233056D4AA433B_METHOD_1_067C1326F0892759_OFFSET))(this, a1, a2);
	}

	::Struct_2_3AAA09564DC7733E Method_1_1A25D14E9139ACB0(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2, ::Enum_3_94EF767DB88BCE69 a3)
	{
		return ((::Struct_2_3AAA09564DC7733E(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::Enum_3_94EF767DB88BCE69))((::PBYTE)hIl2Cpp + CLASS_1_92233056D4AA433B_METHOD_1_1A25D14E9139ACB0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8349E000AF074CBD(::MoleMole::Config::ScreenEffectType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_1_92233056D4AA433B_METHOD_1_8349E000AF074CBD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92233056D4AA433B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_0A2C7117DA59C1CD(::Struct_2_3AAA09564DC7733E a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3AAA09564DC7733E))((::PBYTE)hIl2Cpp + CLASS_1_92233056D4AA433B_METHOD_1_0A2C7117DA59C1CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_7CACD99999C9F98F(::System::String* a1, ::Enum_3_94EF767DB88BCE69 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_94EF767DB88BCE69))((::PBYTE)hIl2Cpp + CLASS_1_92233056D4AA433B_METHOD_1_7CACD99999C9F98F_OFFSET))(this, a1, a2);
	}
};
