#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_691;
namespace System { class String; }

#define CLASS_1_26706B50B8C579CA_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x64C2FB0)
#define CLASS_1_26706B50B8C579CA_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x64C2FC0)
#define CLASS_1_26706B50B8C579CA_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x64C2F90)
#define CLASS_1_26706B50B8C579CA_METHOD_1_7D201B4343E63821_1_OFFSET UNITYSDK_OFFSET(0x64C2F80)
#define CLASS_1_26706B50B8C579CA_METHOD_1_7D201B4343E63821_2_OFFSET UNITYSDK_OFFSET(0x64C2FA0)
#define CLASS_1_26706B50B8C579CA_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x64C2F70)
#define CLASS_1_26706B50B8C579CA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x64C2F10)
#define CLASS_1_26706B50B8C579CA__CTOR_OFFSET UNITYSDK_OFFSET(0x64C2F00)

inline static constexpr unsigned int Class_1_26706B50B8C579CA_TypeDefinitionIndex = 69429;

class Class_1_26706B50B8C579CA : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::String* Field_1_2; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26706B50B8C579CA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::Class_2_208CC9941471731A_691* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_691*))((::PBYTE)hIl2Cpp + CLASS_1_26706B50B8C579CA__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26706B50B8C579CA_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D201B4343E63821_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26706B50B8C579CA_METHOD_1_7D201B4343E63821_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26706B50B8C579CA_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26706B50B8C579CA_METHOD_1_7D201B4343E63821_2_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26706B50B8C579CA_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26706B50B8C579CA_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}
};
