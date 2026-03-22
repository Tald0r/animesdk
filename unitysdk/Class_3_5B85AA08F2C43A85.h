#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_5B85AA08F2C43A85_METHOD_3_0C53D5E3AF8561C4_OFFSET UNITYSDK_OFFSET(0x7B8BB40)
#define CLASS_3_5B85AA08F2C43A85_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x7B8B960)
#define CLASS_3_5B85AA08F2C43A85_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7B8C160)
#define CLASS_3_5B85AA08F2C43A85__CTOR_OFFSET UNITYSDK_OFFSET(0x7B8C040)

inline static constexpr unsigned int Class_3_5B85AA08F2C43A85_TypeDefinitionIndex = 52050;

class Class_3_5B85AA08F2C43A85 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_3_1; // 0x18
	::Class_4_AF61EEC11F34483C<::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_2; // 0x20
	::Class_4_179456445C225AB4<::System::String*>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B85AA08F2C43A85__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B85AA08F2C43A85_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_0C53D5E3AF8561C4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_5B85AA08F2C43A85_METHOD_3_0C53D5E3AF8561C4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B85AA08F2C43A85_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
