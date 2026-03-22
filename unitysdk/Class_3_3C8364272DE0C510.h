#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_4_425BBC3CBFD638A0_1;
class Class_4_866F4597C134539F;
namespace System::Collections { class IList; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_3C8364272DE0C510_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x996E3E0)
#define CLASS_3_3C8364272DE0C510_METHOD_3_A3BBE4D24F1C2B1F_OFFSET UNITYSDK_OFFSET(0x996E5C0)
#define CLASS_3_3C8364272DE0C510_METHOD_3_C474A82F0E10345D_OFFSET UNITYSDK_OFFSET(0x996E750)
#define CLASS_3_3C8364272DE0C510_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x996F290)
#define CLASS_3_3C8364272DE0C510_METHOD_3_F4B3618561FD2492_OFFSET UNITYSDK_OFFSET(0x996ED00)
#define CLASS_3_3C8364272DE0C510__CTOR_OFFSET UNITYSDK_OFFSET(0x996EC50)

inline static constexpr unsigned int Class_3_3C8364272DE0C510_TypeDefinitionIndex = 56966;

class Class_3_3C8364272DE0C510 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_1; // 0x18
	::Class_4_866F4597C134539F* Field_3_2; // 0x20
	::Class_4_425BBC3CBFD638A0_1* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C8364272DE0C510__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C8364272DE0C510_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_A3BBE4D24F1C2B1F(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_3C8364272DE0C510_METHOD_3_A3BBE4D24F1C2B1F_OFFSET))(this, a1);
	}

	static ::System::Collections::IList* Method_3_C474A82F0E10345D(::System::Collections::IList* a1, ::System::Int32 a2)
	{
		return ((::System::Collections::IList*(*)(::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3C8364272DE0C510_METHOD_3_C474A82F0E10345D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F4B3618561FD2492(::System::Collections::IList* a1, ::System::Collections::IList* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::IList*, ::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3C8364272DE0C510_METHOD_3_F4B3618561FD2492_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C8364272DE0C510_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
