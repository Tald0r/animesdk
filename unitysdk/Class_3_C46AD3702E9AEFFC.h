#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_C46AD3702E9AEFFC_METHOD_3_1DB96A2758C8B527_OFFSET UNITYSDK_OFFSET(0x91FB5E0)
#define CLASS_3_C46AD3702E9AEFFC_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x91FB490)
#define CLASS_3_C46AD3702E9AEFFC_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x91FB7F0)
#define CLASS_3_C46AD3702E9AEFFC__CTOR_OFFSET UNITYSDK_OFFSET(0x91FB700)

inline static constexpr unsigned int Class_3_C46AD3702E9AEFFC_TypeDefinitionIndex = 61540;

class Class_3_C46AD3702E9AEFFC : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_AF61EEC11F34483C<::System::Int32>* Field_3_1; // 0x18
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C46AD3702E9AEFFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C46AD3702E9AEFFC_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_1DB96A2758C8B527(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_C46AD3702E9AEFFC_METHOD_3_1DB96A2758C8B527_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C46AD3702E9AEFFC_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
