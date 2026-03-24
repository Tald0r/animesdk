#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_AA2FAB933F36B228;
class Class_2_A598F7625AE8DE78_Class_1_985FB89D66798E31;
namespace Foundation { class IDownloader; }
namespace MoleMole { class ConfigPreIFixTask; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_553BC80C0A542A3A_METHOD_1_0EE1F7F192FB3754_OFFSET UNITYSDK_OFFSET(0x7704490)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x77055F0)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_2566AD459572DFC3_1_OFFSET UNITYSDK_OFFSET(0x7704B30)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x77046B0)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x7704950)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x7705460)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_31143A0662DEF638_OFFSET UNITYSDK_OFFSET(0x7703FE0)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_3491513EEDE20EE3_OFFSET UNITYSDK_OFFSET(0x7705220)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x7704380)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x7704610)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_455E250D679F9642_1_OFFSET UNITYSDK_OFFSET(0x77050A0)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x77038E0)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_5782059EA974C4A1_OFFSET UNITYSDK_OFFSET(0x7704DD0)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_6D124B18AA198145_OFFSET UNITYSDK_OFFSET(0x7703A60)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_705FFC79B57F4953_OFFSET UNITYSDK_OFFSET(0x77040D0)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_7FC311FD18620062_OFFSET UNITYSDK_OFFSET(0x7704540)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_896FA9EAB4C29FB4_1_OFFSET UNITYSDK_OFFSET(0x7705170)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_896FA9EAB4C29FB4_OFFSET UNITYSDK_OFFSET(0x7704A70)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_9920914C270B8F42_OFFSET UNITYSDK_OFFSET(0x77039B0)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x7703D50)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_C72B4C4F620F109E_OFFSET UNITYSDK_OFFSET(0x7703F60)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_C9312916D3A31323_1_OFFSET UNITYSDK_OFFSET(0x7705150)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_C9312916D3A31323_OFFSET UNITYSDK_OFFSET(0x77045F0)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_CD0EBD8380A9769C_OFFSET UNITYSDK_OFFSET(0x77056B0)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_D8299432719B3C68_1_OFFSET UNITYSDK_OFFSET(0x7705400)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_D8299432719B3C68_2_OFFSET UNITYSDK_OFFSET(0x7705660)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x7704430)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7704B20)
#define CLASS_1_553BC80C0A542A3A__CCTOR_OFFSET UNITYSDK_OFFSET(0x7703880)
#define CLASS_1_553BC80C0A542A3A__CTOR_OFFSET UNITYSDK_OFFSET(0x7703870)

inline static constexpr unsigned int Class_1_553BC80C0A542A3A_TypeDefinitionIndex = 51986;

class Class_1_553BC80C0A542A3A : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_553BC80C0A542A3A_TypeDefinitionIndex)->GetStaticField(0x2F160);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_553BC80C0A542A3A_TypeDefinitionIndex)->GetStaticField(0x2F168);
	}
	static ::Class_1_553BC80C0A542A3A** StaticGet_Field_1_0()
	{
		return (::Class_1_553BC80C0A542A3A**)Il2CppClass::FromTypeDefinitionIndex(Class_1_553BC80C0A542A3A_TypeDefinitionIndex)->GetStaticField(0x2F170);
	}
	::Foundation::IDownloader* Field_1_11; // 0x10
	::System::Action_1<::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A>* Field_1_8; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_3; // 0x20
	::Class_1_AA2FAB933F36B228* Field_1_10; // 0x28
	::System::Action_1<::System::Boolean>* Field_1_7; // 0x30
	::Class_2_A598F7625AE8DE78_Class_1_985FB89D66798E31* Field_1_12; // 0x38
	::System::Action_2<::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A, ::System::Boolean>* Field_1_9; // 0x40
	::MoleMole::ConfigPreIFixTask* Field_1_4; // 0x48
	::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A Field_1_5; // 0x50
	::System::Boolean Field_1_6; // 0x51

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A__CCTOR_OFFSET))();
	}

	::System::Void Method_1_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_455E250D679F9642_OFFSET))(this);
	}

	static ::System::Void Method_1_6D124B18AA198145(::System::Action_1<::System::Boolean>* a1, ::System::Action_1<::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A>* a2, ::System::Action_2<::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::System::Action_1<::System::Boolean>*, ::System::Action_1<::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A>*, ::System::Action_2<::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_6D124B18AA198145_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_705FFC79B57F4953(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_705FFC79B57F4953_OFFSET))(a1);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}

	::System::Void Method_1_0EE1F7F192FB3754()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_0EE1F7F192FB3754_OFFSET))(this);
	}

	::System::Void Method_1_C9312916D3A31323()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_C9312916D3A31323_OFFSET))(this);
	}

	::System::Void Method_1_9920914C270B8F42(::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_9920914C270B8F42_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_1_896FA9EAB4C29FB4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_896FA9EAB4C29FB4_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_455E250D679F9642_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_455E250D679F9642_1_OFFSET))(this);
	}

	::System::Void Method_1_C9312916D3A31323_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_C9312916D3A31323_1_OFFSET))(this);
	}

	::System::Void Method_1_C72B4C4F620F109E(::System::Action_1<::System::Boolean>* a1, ::System::Action_1<::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A>* a2, ::System::Action_2<::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*, ::System::Action_1<::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A>*, ::System::Action_2<::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_C72B4C4F620F109E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_896FA9EAB4C29FB4_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_896FA9EAB4C29FB4_1_OFFSET))(this);
	}

	::Class_1_AA2FAB933F36B228* Method_1_3491513EEDE20EE3()
	{
		return ((::Class_1_AA2FAB933F36B228*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_3491513EEDE20EE3_OFFSET))(this);
	}

	::System::Void Method_1_2566AD459572DFC3_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_2566AD459572DFC3_1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68_1(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_D8299432719B3C68_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_1_5782059EA974C4A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_5782059EA974C4A1_OFFSET))(this);
	}

	::System::Void Method_1_7FC311FD18620062(::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_7FC311FD18620062_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68_2(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_D8299432719B3C68_2_OFFSET))(this, a1);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_CD0EBD8380A9769C(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_CD0EBD8380A9769C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_B768DA94E3FD91D9_OFFSET))();
	}

	::System::Void Method_1_31143A0662DEF638(::System::Collections::Generic::List_1<::System::String*>* a1, ::MoleMole::ConfigPreIFixTask* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::ConfigPreIFixTask*))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_31143A0662DEF638_OFFSET))(this, a1, a2);
	}
};
