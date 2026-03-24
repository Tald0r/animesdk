#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_62D04F13539EF8BD_METHOD_2_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1ADF80F0)
#define CLASS_2_62D04F13539EF8BD_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1ADF80E0)
#define CLASS_2_62D04F13539EF8BD_METHOD_2_7D201B4343E63821_1_OFFSET UNITYSDK_OFFSET(0x1ADF80D0)
#define CLASS_2_62D04F13539EF8BD_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x1ADF80C0)
#define CLASS_2_62D04F13539EF8BD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ADF80B0)
#define CLASS_2_62D04F13539EF8BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADF80A0)

inline static constexpr unsigned int Class_2_62D04F13539EF8BD_TypeDefinitionIndex = 25799;

class Class_2_62D04F13539EF8BD : public ::System::Attribute
{
public:
	::System::String* Field_2_1; // 0x10
	::System::String* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62D04F13539EF8BD__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_62D04F13539EF8BD__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_62D04F13539EF8BD_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D201B4343E63821_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_62D04F13539EF8BD_METHOD_2_7D201B4343E63821_1_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62D04F13539EF8BD_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62D04F13539EF8BD_METHOD_2_126AB3935214AA22_1_OFFSET))(this);
	}
};
