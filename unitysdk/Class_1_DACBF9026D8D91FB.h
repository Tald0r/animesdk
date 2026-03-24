#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_28FD69F98B9C81E2.h"
#include "unitysdk/Struct_2_BBA9BFFCB5AD7C3C.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_2D6677C73EA0C455;
class Class_1_F3CF06447F5655DF;
class Class_1_F61BB49F70F7407A;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DACBF9026D8D91FB_METHOD_1_02FC748F7F3059FD_OFFSET UNITYSDK_OFFSET(0xB001E50)
#define CLASS_1_DACBF9026D8D91FB_METHOD_1_0A95A576455E9B0A_OFFSET UNITYSDK_OFFSET(0xB0025A0)
#define CLASS_1_DACBF9026D8D91FB_METHOD_1_0EDB28F732D8BEA4_OFFSET UNITYSDK_OFFSET(0xB002070)
#define CLASS_1_DACBF9026D8D91FB_METHOD_1_1ED02DCA6182A52D_OFFSET UNITYSDK_OFFSET(0xB001BB0)
#define CLASS_1_DACBF9026D8D91FB_METHOD_1_4B1E26575F5F2545_OFFSET UNITYSDK_OFFSET(0xB001D10)
#define CLASS_1_DACBF9026D8D91FB_METHOD_1_625D653B40F71DA3_1_OFFSET UNITYSDK_OFFSET(0xB002440)
#define CLASS_1_DACBF9026D8D91FB_METHOD_1_625D653B40F71DA3_OFFSET UNITYSDK_OFFSET(0xB0012A0)
#define CLASS_1_DACBF9026D8D91FB_METHOD_1_6F2C635308E56A1D_OFFSET UNITYSDK_OFFSET(0xB001400)
#define CLASS_1_DACBF9026D8D91FB_METHOD_1_7206DC8F66A4D2A8_1_OFFSET UNITYSDK_OFFSET(0xB001A40)
#define CLASS_1_DACBF9026D8D91FB_METHOD_1_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0xB001590)
#define CLASS_1_DACBF9026D8D91FB_METHOD_1_8A64EDA54871F08B_OFFSET UNITYSDK_OFFSET(0xB001010)
#define CLASS_1_DACBF9026D8D91FB_METHOD_1_9AEEA16F27488438_OFFSET UNITYSDK_OFFSET(0xB001A30)
#define CLASS_1_DACBF9026D8D91FB_METHOD_1_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0xB001150)
#define CLASS_1_DACBF9026D8D91FB_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB0011C0)
#define CLASS_1_DACBF9026D8D91FB_METHOD_1_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0xB001700)
#define CLASS_1_DACBF9026D8D91FB__CTOR_OFFSET UNITYSDK_OFFSET(0xB001000)

inline static constexpr unsigned int Class_1_DACBF9026D8D91FB_TypeDefinitionIndex = 76596;

class Class_1_DACBF9026D8D91FB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_1_F61BB49F70F7407A*, ::Class_1_F3CF06447F5655DF*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2D6677C73EA0C455*>* Field_1_1; // 0x18
	::MoleMole::Battle::Entity* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACBF9026D8D91FB__CTOR_OFFSET))(this);
	}

	static ::Class_1_DACBF9026D8D91FB* Method_1_8A64EDA54871F08B(::MoleMole::Battle::Entity* a1)
	{
		return ((::Class_1_DACBF9026D8D91FB*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_DACBF9026D8D91FB_METHOD_1_8A64EDA54871F08B_OFFSET))(a1);
	}

	::System::Nullable_1<::System::Single> Method_1_625D653B40F71DA3(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DACBF9026D8D91FB_METHOD_1_625D653B40F71DA3_OFFSET))(this, a1, a2);
	}

	::System::Nullable_1<::Struct_2_BBA9BFFCB5AD7C3C> Method_1_6F2C635308E56A1D(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Nullable_1<::Struct_2_BBA9BFFCB5AD7C3C>(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DACBF9026D8D91FB_METHOD_1_6F2C635308E56A1D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACBF9026D8D91FB_METHOD_1_7206DC8F66A4D2A8_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACBF9026D8D91FB_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_FD6692A5F6B0AC0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACBF9026D8D91FB_METHOD_1_FD6692A5F6B0AC0C_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2D6677C73EA0C455*>* Method_1_9AEEA16F27488438()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2D6677C73EA0C455*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACBF9026D8D91FB_METHOD_1_9AEEA16F27488438_OFFSET))(this);
	}

	::System::Void Method_1_7206DC8F66A4D2A8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACBF9026D8D91FB_METHOD_1_7206DC8F66A4D2A8_1_OFFSET))(this);
	}

	::System::Nullable_1<::Enum_3_28FD69F98B9C81E2> Method_1_1ED02DCA6182A52D(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Nullable_1<::Enum_3_28FD69F98B9C81E2>(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DACBF9026D8D91FB_METHOD_1_1ED02DCA6182A52D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4B1E26575F5F2545(::System::String* a1, ::Class_1_2D6677C73EA0C455*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_2D6677C73EA0C455*&))((::PBYTE)hIl2Cpp + CLASS_1_DACBF9026D8D91FB_METHOD_1_4B1E26575F5F2545_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_02FC748F7F3059FD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DACBF9026D8D91FB_METHOD_1_02FC748F7F3059FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_0EDB28F732D8BEA4(::System::String* a1, ::Class_1_2D6677C73EA0C455* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_2D6677C73EA0C455*))((::PBYTE)hIl2Cpp + CLASS_1_DACBF9026D8D91FB_METHOD_1_0EDB28F732D8BEA4_OFFSET))(this, a1, a2);
	}

	::System::Nullable_1<::System::Single> Method_1_625D653B40F71DA3_1(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DACBF9026D8D91FB_METHOD_1_625D653B40F71DA3_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_DACBF9026D8D91FB_METHOD_1_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Method_1_0A95A576455E9B0A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACBF9026D8D91FB_METHOD_1_0A95A576455E9B0A_OFFSET))(this);
	}
};
