#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1E9F6DAAE25A016F.h"
#include "unitysdk/Enum_3_DB663931210BBC27_42.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/Direction.h"

class Class_1_4CE63FCF9609E6DB;
class Class_1_782D7B640E2E81AE;
class Class_3_8675658B1FBE887E;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2874BE670AE934F7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7BFEFD0)
#define CLASS_2_2874BE670AE934F7_METHOD_2_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x7BFF650)
#define CLASS_2_2874BE670AE934F7_METHOD_2_0E330D7D1F7ADCF9_OFFSET UNITYSDK_OFFSET(0x7BFFBC0)
#define CLASS_2_2874BE670AE934F7_METHOD_2_2471CA2032D50CE0_OFFSET UNITYSDK_OFFSET(0x7BFFDE0)
#define CLASS_2_2874BE670AE934F7_METHOD_2_3EF33FD8BF224359_1_OFFSET UNITYSDK_OFFSET(0x7C000F0)
#define CLASS_2_2874BE670AE934F7_METHOD_2_3EF33FD8BF224359_OFFSET UNITYSDK_OFFSET(0x7BFFA70)
#define CLASS_2_2874BE670AE934F7_METHOD_2_4307B2A4B4A12C1A_1_OFFSET UNITYSDK_OFFSET(0x7BFF6D0)
#define CLASS_2_2874BE670AE934F7_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x7BFF500)
#define CLASS_2_2874BE670AE934F7_METHOD_2_658D08A03C67A4D1_OFFSET UNITYSDK_OFFSET(0x7C00240)
#define CLASS_2_2874BE670AE934F7_METHOD_2_6620D85FFBC4256B_OFFSET UNITYSDK_OFFSET(0x7BFF1E0)
#define CLASS_2_2874BE670AE934F7_METHOD_2_C50A2293958CA940_1_OFFSET UNITYSDK_OFFSET(0x7BFFFF0)
#define CLASS_2_2874BE670AE934F7_METHOD_2_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x7BFF820)
#define CLASS_2_2874BE670AE934F7_METHOD_2_C9BABF9ABFA5AD3D_OFFSET UNITYSDK_OFFSET(0x7BFF070)
#define CLASS_2_2874BE670AE934F7_METHOD_2_EFC8C9A529A09180_OFFSET UNITYSDK_OFFSET(0x7BFF460)
#define CLASS_2_2874BE670AE934F7_METHOD_2_F10A54FA2B59888D_OFFSET UNITYSDK_OFFSET(0x7BFF920)
#define CLASS_2_2874BE670AE934F7_ONCREATE_OFFSET UNITYSDK_OFFSET(0x7BFEF30)
#define CLASS_2_2874BE670AE934F7__CTOR_OFFSET UNITYSDK_OFFSET(0x7BFF050)

inline static constexpr unsigned int Class_2_2874BE670AE934F7_TypeDefinitionIndex = 67832;

class Class_2_2874BE670AE934F7 : public ::Foundation::SingletonDisposable_1<::Class_2_2874BE670AE934F7*>
{
public:
	::Class_1_782D7B640E2E81AE* Field_2_1; // 0x10
	::Class_3_8675658B1FBE887E* Field_2_2; // 0x18
	::Class_1_4CE63FCF9609E6DB* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_C9BABF9ABFA5AD3D(::MoleMole::MiniGame::TartarusHounds::Direction a1, ::System::Boolean a2, ::Enum_3_1E9F6DAAE25A016F a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction, ::System::Boolean, ::Enum_3_1E9F6DAAE25A016F))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_C9BABF9ABFA5AD3D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EFC8C9A529A09180(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_EFC8C9A529A09180_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_097468641FDED14E(::Class_1_782D7B640E2E81AE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_782D7B640E2E81AE*))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_4307B2A4B4A12C1A_1_OFFSET))(this);
	}

	::System::Void Method_2_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_C50A2293958CA940_OFFSET))(this, a1);
	}

	::System::Void Method_2_F10A54FA2B59888D(::Enum_3_DB663931210BBC27_42 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_42))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_F10A54FA2B59888D_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EF33FD8BF224359(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_3EF33FD8BF224359_OFFSET))(this, a1);
	}

	::System::Void Method_2_6620D85FFBC4256B(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_6620D85FFBC4256B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_0E330D7D1F7ADCF9(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_0E330D7D1F7ADCF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2471CA2032D50CE0(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_2471CA2032D50CE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C50A2293958CA940_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_C50A2293958CA940_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EF33FD8BF224359_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_3EF33FD8BF224359_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_658D08A03C67A4D1(::Class_3_8675658B1FBE887E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_8675658B1FBE887E*))((::PBYTE)hIl2Cpp + CLASS_2_2874BE670AE934F7_METHOD_2_658D08A03C67A4D1_OFFSET))(this, a1);
	}
};
