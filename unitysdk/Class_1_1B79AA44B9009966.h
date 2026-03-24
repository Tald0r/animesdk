#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_48F4A404A08692BE_6;
class Class_2_208CC9941471731A_996;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1B79AA44B9009966_METHOD_1_2553A34F3DEAC54B_OFFSET UNITYSDK_OFFSET(0x64348E0)
#define CLASS_1_1B79AA44B9009966_METHOD_1_2879872FD84B85D2_OFFSET UNITYSDK_OFFSET(0x6435320)
#define CLASS_1_1B79AA44B9009966_METHOD_1_386902AFC1AC4E0D_OFFSET UNITYSDK_OFFSET(0x6434DA0)
#define CLASS_1_1B79AA44B9009966_METHOD_1_64FA8F06023ABA2D_OFFSET UNITYSDK_OFFSET(0x6434F80)
#define CLASS_1_1B79AA44B9009966_METHOD_1_DEBB3E700DDBB4E0_OFFSET UNITYSDK_OFFSET(0x6434C00)
#define CLASS_1_1B79AA44B9009966_METHOD_1_F6E7733EA17C5FB4_OFFSET UNITYSDK_OFFSET(0x6434AC0)
#define CLASS_1_1B79AA44B9009966_METHOD_1_F7BAE94B454B4E68_OFFSET UNITYSDK_OFFSET(0x6434740)

inline static constexpr unsigned int Class_1_1B79AA44B9009966_TypeDefinitionIndex = 44624;

class Class_1_1B79AA44B9009966 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_F7BAE94B454B4E68(::System::String* a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_1B79AA44B9009966_METHOD_1_F7BAE94B454B4E68_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_2553A34F3DEAC54B(::MoleMole::Config::BaseProperty a1, ::Class_2_208CC9941471731A_996* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Single(*)(::MoleMole::Config::BaseProperty, ::Class_2_208CC9941471731A_996*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1B79AA44B9009966_METHOD_1_2553A34F3DEAC54B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_DEBB3E700DDBB4E0()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_1B79AA44B9009966_METHOD_1_DEBB3E700DDBB4E0_OFFSET))();
	}

	static ::System::Int32 Method_1_386902AFC1AC4E0D(::MoleMole::EntityHandle a1)
	{
		return ((::System::Int32(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_1B79AA44B9009966_METHOD_1_386902AFC1AC4E0D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_64FA8F06023ABA2D(::System::String* a1, ::System::Int32& a2, ::System::Int32& a3, ::System::Collections::Generic::List_1<::System::Int32>*& a4)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int32&, ::System::Int32&, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_1B79AA44B9009966_METHOD_1_64FA8F06023ABA2D_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_48F4A404A08692BE_6* Method_1_F6E7733EA17C5FB4(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_1_48F4A404A08692BE_6*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1B79AA44B9009966_METHOD_1_F6E7733EA17C5FB4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2879872FD84B85D2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1B79AA44B9009966_METHOD_1_2879872FD84B85D2_OFFSET))(a1);
	}
};
