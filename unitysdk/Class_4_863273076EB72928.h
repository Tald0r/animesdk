#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_4_863273076EB72928_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x65E4230)
#define CLASS_4_863273076EB72928_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x65E47A0)
#define CLASS_4_863273076EB72928_METHOD_4_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x65E4420)
#define CLASS_4_863273076EB72928__CTOR_OFFSET UNITYSDK_OFFSET(0x65E4670)

inline static constexpr unsigned int Class_4_863273076EB72928_TypeDefinitionIndex = 38505;

class Class_4_863273076EB72928 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_4_1; // 0x28
	::Class_4_AF61EEC11F34483C<::MoleMole::EntityHandle>* Field_4_2; // 0x30
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_863273076EB72928__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_863273076EB72928_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_C43DD7AFEEA2B827(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_863273076EB72928_METHOD_4_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_863273076EB72928_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
