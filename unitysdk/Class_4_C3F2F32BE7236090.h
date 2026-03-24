#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"

#define CLASS_4_C3F2F32BE7236090_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x92E6EA0)
#define CLASS_4_C3F2F32BE7236090_METHOD_4_3FC5188C07CF0F71_OFFSET UNITYSDK_OFFSET(0x92E7000)
#define CLASS_4_C3F2F32BE7236090_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x92E70A0)
#define CLASS_4_C3F2F32BE7236090_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x92E6F80)
#define CLASS_4_C3F2F32BE7236090__CCTOR_OFFSET UNITYSDK_OFFSET(0x92E6F00)
#define CLASS_4_C3F2F32BE7236090__CTOR_OFFSET UNITYSDK_OFFSET(0x92E6FF0)

inline static constexpr unsigned int Class_4_C3F2F32BE7236090_TypeDefinitionIndex = 61749;

class Class_4_C3F2F32BE7236090 : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x13C; // 0x0
	::System::UInt32 Field_4_1; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_C3F2F32BE7236090__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C3F2F32BE7236090__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C3F2F32BE7236090_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C3F2F32BE7236090_ONCLEAN_OFFSET))(this);
	}

	static ::Class_4_C3F2F32BE7236090* Method_4_3FC5188C07CF0F71()
	{
		return ((::Class_4_C3F2F32BE7236090*(*)())((::PBYTE)hIl2Cpp + CLASS_4_C3F2F32BE7236090_METHOD_4_3FC5188C07CF0F71_OFFSET))();
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C3F2F32BE7236090_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
