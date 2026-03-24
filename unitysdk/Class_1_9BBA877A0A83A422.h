#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectMetaFlags.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectReadyFlags.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_32D8C20D46CEFA3D.h"
#include "unitysdk/System/Object.h"

class Class_1_5FA9CCDDD9957726;
class Class_1_A0EE873EACD64B72;
namespace Foundation::ViewObject { class IViewObjectComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9BBA877A0A83A422_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7FC03E0)
#define CLASS_1_9BBA877A0A83A422_METHOD_1_056EDD07D91B7B98_OFFSET UNITYSDK_OFFSET(0x7FC05E0)
#define CLASS_1_9BBA877A0A83A422_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x7FC05D0)
#define CLASS_1_9BBA877A0A83A422_METHOD_1_8B2C27F836EAA7B5_OFFSET UNITYSDK_OFFSET(0x7FC0660)
#define CLASS_1_9BBA877A0A83A422_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x7FC0C60)
#define CLASS_1_9BBA877A0A83A422_METHOD_1_B9E6770371EB9BFC_OFFSET UNITYSDK_OFFSET(0x7FC0720)
#define CLASS_1_9BBA877A0A83A422_METHOD_1_E1BED5485EF1847F_OFFSET UNITYSDK_OFFSET(0x7FC0560)
#define CLASS_1_9BBA877A0A83A422__CTOR_OFFSET UNITYSDK_OFFSET(0x7FC04D0)

inline static constexpr unsigned int Class_1_9BBA877A0A83A422_TypeDefinitionIndex = 40162;

class Class_1_9BBA877A0A83A422 : public ::System::Object
{
public:
	::Class_1_5FA9CCDDD9957726* Field_1_2; // 0x10
	::Struct_2_32D8C20D46CEFA3D Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::Foundation::ViewObject::IViewObjectComponent*>* Field_1_1; // 0x20
	::Foundation::ViewObject::EViewObjectMetaFlags Field_1_5; // 0x28
	::Foundation::ViewObject::EViewObjectReadyFlags Field_1_4; // 0x2C
	::System::UInt32 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BBA877A0A83A422__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BBA877A0A83A422_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E1BED5485EF1847F(::Foundation::ViewObject::EViewObjectReadyFlags a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectReadyFlags))((::PBYTE)hIl2Cpp + CLASS_1_9BBA877A0A83A422_METHOD_1_E1BED5485EF1847F_OFFSET))(this, a1);
	}

	::Class_1_5FA9CCDDD9957726* Method_1_24748FC20F375725()
	{
		return ((::Class_1_5FA9CCDDD9957726*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BBA877A0A83A422_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_056EDD07D91B7B98(::Class_1_5FA9CCDDD9957726* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FA9CCDDD9957726*))((::PBYTE)hIl2Cpp + CLASS_1_9BBA877A0A83A422_METHOD_1_056EDD07D91B7B98_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B2C27F836EAA7B5(::Class_1_A0EE873EACD64B72* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0EE873EACD64B72*))((::PBYTE)hIl2Cpp + CLASS_1_9BBA877A0A83A422_METHOD_1_8B2C27F836EAA7B5_OFFSET))(this, a1);
	}

	::Foundation::ViewObject::ViewObjectHandle Method_1_B9E6770371EB9BFC(::System::String* a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9BBA877A0A83A422_METHOD_1_B9E6770371EB9BFC_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_5FA9CCDDD9957726* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FA9CCDDD9957726*))((::PBYTE)hIl2Cpp + CLASS_1_9BBA877A0A83A422_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}
};
