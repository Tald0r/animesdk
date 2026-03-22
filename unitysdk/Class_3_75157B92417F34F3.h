#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_1_E4DCFD174698F990;
class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_75157B92417F34F3_METHOD_3_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x962F470)
#define CLASS_3_75157B92417F34F3_METHOD_3_4D606E0EBD8E195C_OFFSET UNITYSDK_OFFSET(0x962F2D0)
#define CLASS_3_75157B92417F34F3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x96300E0)
#define CLASS_3_75157B92417F34F3_METHOD_3_D7D32BC455E1AEBB_OFFSET UNITYSDK_OFFSET(0x962F8E0)
#define CLASS_3_75157B92417F34F3_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x9630070)
#define CLASS_3_75157B92417F34F3__CTOR_OFFSET UNITYSDK_OFFSET(0x962FDB0)

inline static constexpr unsigned int Class_3_75157B92417F34F3_TypeDefinitionIndex = 45168;

class Class_3_75157B92417F34F3 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x18
	::Class_4_179456445C225AB4<::System::String*>* Field_3_5; // 0x20
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_4; // 0x28
	::Class_3_B537A0AA78803363* Field_3_6; // 0x30
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x38
	::Class_4_179456445C225AB4<::System::String*>* Field_3_2; // 0x40
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_3; // 0x48
	::Class_3_B537A0AA78803363* Field_3_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_75157B92417F34F3__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4D606E0EBD8E195C(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_3_75157B92417F34F3_METHOD_3_4D606E0EBD8E195C_OFFSET))(this, a1);
	}

	::System::Void Method_3_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_75157B92417F34F3_METHOD_3_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_3_D7D32BC455E1AEBB(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_75157B92417F34F3_METHOD_3_D7D32BC455E1AEBB_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_3_75157B92417F34F3_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_75157B92417F34F3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
