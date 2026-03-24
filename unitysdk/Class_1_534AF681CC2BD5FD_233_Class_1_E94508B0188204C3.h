#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_534AF681CC2BD5FD_233_Class_1_E94508B0188204C3_Struct_2_07071E4F5DB33E02.h"
#include "unitysdk/Class_1_534AF681CC2BD5FD_233_Struct_2_6815B1DEBF66D9E3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_583;
class Class_1_1CAC0F23A7272040;
class Class_1_2AD007055AA355A8;
class Class_1_534AF681CC2BD5FD_233_Class_1_E0B86C768795BFD2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9610400)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_0089E869E2D4144B_OFFSET UNITYSDK_OFFSET(0x9611090)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x96108E0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_1A425C083DDF2BB1_OFFSET UNITYSDK_OFFSET(0x9610A10)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x9612DE0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_207A95A4E1CA801D_OFFSET UNITYSDK_OFFSET(0x9611E20)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_228D181003C9D416_OFFSET UNITYSDK_OFFSET(0x96111E0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x9611080)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_2D8C83D23ED3B8EC_OFFSET UNITYSDK_OFFSET(0x96126C0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x9610BD0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_4C49B7560653199E_OFFSET UNITYSDK_OFFSET(0x96118C0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x9612A70)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_57DCB1CE056E3F2A_OFFSET UNITYSDK_OFFSET(0x9610E20)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_5A7C8C5323EFAD78_OFFSET UNITYSDK_OFFSET(0x9613EF0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_5FEE753951C20AC1_OFFSET UNITYSDK_OFFSET(0x9610950)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_86763F08FFA3665D_OFFSET UNITYSDK_OFFSET(0x9610F00)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x96127D0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_961C8076180B150D_OFFSET UNITYSDK_OFFSET(0x9612E60)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x96128B0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_9AC0642BDB45CE2B_OFFSET UNITYSDK_OFFSET(0x96134B0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_9ED0D0C8E6E70ECA_OFFSET UNITYSDK_OFFSET(0x9611140)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_B167400533B0B617_OFFSET UNITYSDK_OFFSET(0x96127E0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x9610BE0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_D890CE7609917E81_OFFSET UNITYSDK_OFFSET(0x96133F0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_E631B63295647DB5_OFFSET UNITYSDK_OFFSET(0x9610AB0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_F76F7681A67EEF66_OFFSET UNITYSDK_OFFSET(0x96140D0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_FA383E53DEC53851_OFFSET UNITYSDK_OFFSET(0x9612950)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_FE4FFF99CBDC5C59_1_OFFSET UNITYSDK_OFFSET(0x9612CE0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0x9610820)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_FF9258F34D70D4D9_OFFSET UNITYSDK_OFFSET(0x9612B90)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3__CCTOR_OFFSET UNITYSDK_OFFSET(0x96106E0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3__CTOR_OFFSET UNITYSDK_OFFSET(0x9610510)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_233_Class_1_E94508B0188204C3_TypeDefinitionIndex = 63996;

class Class_1_534AF681CC2BD5FD_233_Class_1_E94508B0188204C3 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Color>** StaticGet_Field_1_22()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_233_Class_1_E94508B0188204C3_TypeDefinitionIndex)->GetStaticField(0x45850);
	}
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_233_Class_1_E94508B0188204C3_TypeDefinitionIndex)->GetStaticField(0x11290);
	}
	static ::System::Boolean* StaticGet_Field_1_17()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_233_Class_1_E94508B0188204C3_TypeDefinitionIndex)->GetStaticField(0x11294);
	}
	// static const ::System::String* Field_1_14; // 0x0
	::MoleMole::Config::GuidePoint_AutoGenStrategy Field_1_15; // 0x10
	::Class_1_1CAC0F23A7272040* Field_1_4; // 0x58
	::System::Collections::Generic::List_1<::Class_1_534AF681CC2BD5FD_233_Class_1_E94508B0188204C3_Struct_2_07071E4F5DB33E02>* Field_1_18; // 0x60
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_23; // 0x68
	::System::Object* Field_1_10; // 0x70
	::Class_0_16E4307DCC419505_583* Field_1_1; // 0x78
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x80
	::Class_1_2AD007055AA355A8* Field_1_11; // 0x88
	::System::Collections::Generic::List_1<::System::Single>* Field_1_8; // 0x90
	::System::String* Field_1_9; // 0x98
	::System::Collections::Generic::List_1<::System::String*>* Field_1_13; // 0xA0
	::Class_1_534AF681CC2BD5FD_233_Class_1_E0B86C768795BFD2* Field_1_0; // 0xA8
	::Foundation::Coroutine::CoroutineHandle Field_1_2; // 0xB0
	::System::Single Field_1_20; // 0xB4
	::UnityEngine::Vector3 Field_1_7; // 0xB8
	::System::Boolean Field_1_25; // 0xC4
	::System::Boolean Field_1_19; // 0xC5
	::System::Boolean Field_1_24; // 0xC6
	::System::Boolean Field_1_21; // 0xC7
	::System::Int32 Field_1_26; // 0xC8
	::System::Single Field_1_16; // 0xCC
	::System::Boolean Field_1_6; // 0xD0
	::System::Boolean Field_1_3; // 0xD1

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_DISPOSE_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_FE4FFF99CBDC5C59_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2AD007055AA355A8*>* Method_1_5FEE753951C20AC1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2AD007055AA355A8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_5FEE753951C20AC1_OFFSET))(this);
	}

	::System::Int32 Method_1_1A425C083DDF2BB1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_1A425C083DDF2BB1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E631B63295647DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_E631B63295647DB5_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_43535ED8A0DF5FF8_OFFSET))(this);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_57DCB1CE056E3F2A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_57DCB1CE056E3F2A_OFFSET))(this);
	}

	::System::Int32 Method_1_86763F08FFA3665D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_86763F08FFA3665D_OFFSET))(this);
	}

	::Class_1_1CAC0F23A7272040* Method_1_24748FC20F375725()
	{
		return ((::Class_1_1CAC0F23A7272040*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_0089E869E2D4144B(::System::Single a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_0089E869E2D4144B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_1_9ED0D0C8E6E70ECA(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_9ED0D0C8E6E70ECA_OFFSET))(this, a1);
	}

	::System::Void Method_1_228D181003C9D416(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_228D181003C9D416_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_4C49B7560653199E(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::UnityEngine::Vector3 a7, ::System::Boolean a8)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_4C49B7560653199E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_1CAC0F23A7272040* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CAC0F23A7272040*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_B167400533B0B617()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_B167400533B0B617_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_FA383E53DEC53851(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_FA383E53DEC53851_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_4D9E1AC61B60D577_OFFSET))(this);
	}

	::System::Void Method_1_207A95A4E1CA801D(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_207A95A4E1CA801D_OFFSET))(this, a1, a2, a3, a4);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_FE4FFF99CBDC5C59_1()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_FE4FFF99CBDC5C59_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_FF9258F34D70D4D9(::Class_1_534AF681CC2BD5FD_233_Class_1_E94508B0188204C3_Struct_2_07071E4F5DB33E02 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_534AF681CC2BD5FD_233_Class_1_E94508B0188204C3_Struct_2_07071E4F5DB33E02, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_FF9258F34D70D4D9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_961C8076180B150D(::System::Boolean& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_961C8076180B150D_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_D890CE7609917E81()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_D890CE7609917E81_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_9AC0642BDB45CE2B(::System::Collections::Generic::List_1<::Class_1_534AF681CC2BD5FD_233_Struct_2_6815B1DEBF66D9E3>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3, ::System::Single a4, ::System::String* a5, ::System::Boolean a6)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_534AF681CC2BD5FD_233_Struct_2_6815B1DEBF66D9E3>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::System::Single, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_9AC0642BDB45CE2B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_2D8C83D23ED3B8EC(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_2D8C83D23ED3B8EC_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_1_5A7C8C5323EFAD78(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_5A7C8C5323EFAD78_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_F76F7681A67EEF66(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_METHOD_1_F76F7681A67EEF66_OFFSET))(this, a1);
	}
};
