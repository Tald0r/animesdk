#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_49ABC235CB23B56F.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_1DB8237DEAE11F14_METHOD_1_00D0984835348FD8_1_OFFSET UNITYSDK_OFFSET(0x72EC3F0)
#define CLASS_1_1DB8237DEAE11F14_METHOD_1_00D0984835348FD8_OFFSET UNITYSDK_OFFSET(0x72EC1C0)
#define CLASS_1_1DB8237DEAE11F14_METHOD_1_286570692E8A7912_OFFSET UNITYSDK_OFFSET(0x72EC300)
#define CLASS_1_1DB8237DEAE11F14_METHOD_1_6597F9D2D4A0542F_OFFSET UNITYSDK_OFFSET(0x72EC120)
#define CLASS_1_1DB8237DEAE11F14_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x72EC220)
#define CLASS_1_1DB8237DEAE11F14_METHOD_1_F624506052E4790C_OFFSET UNITYSDK_OFFSET(0x72EBFC0)
#define CLASS_1_1DB8237DEAE11F14__CTOR_OFFSET UNITYSDK_OFFSET(0x72EBFB0)

inline static constexpr unsigned int Class_1_1DB8237DEAE11F14_TypeDefinitionIndex = 72829;

class Class_1_1DB8237DEAE11F14 : public ::System::Object
{
public:
	::Struct_2_49ABC235CB23B56F Field_1_2; // 0x10
	::System::Action_1<::System::Int32>* Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::System::Int32 Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DB8237DEAE11F14__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F624506052E4790C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1DB8237DEAE11F14_METHOD_1_F624506052E4790C_OFFSET))(this, a1);
	}

	::System::Void Method_1_6597F9D2D4A0542F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DB8237DEAE11F14_METHOD_1_6597F9D2D4A0542F_OFFSET))(this);
	}

	::System::Void Method_1_00D0984835348FD8(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_1DB8237DEAE11F14_METHOD_1_00D0984835348FD8_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DB8237DEAE11F14_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_286570692E8A7912()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DB8237DEAE11F14_METHOD_1_286570692E8A7912_OFFSET))(this);
	}

	::System::Void Method_1_00D0984835348FD8_1(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_1DB8237DEAE11F14_METHOD_1_00D0984835348FD8_1_OFFSET))(this, a1);
	}
};
