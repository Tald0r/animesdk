#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_B1250269F1E3BC27_Struct_2_66EE559EF62DCFBC.h"
#include "unitysdk/UnityEngine/LayerMask.h"

class Class_2_14986121AA61AD99;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_B1250269F1E3BC27_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x7E60440)
#define CLASS_3_B1250269F1E3BC27_METHOD_3_52843B847BEFBCAA_OFFSET UNITYSDK_OFFSET(0x7E605F0)
#define CLASS_3_B1250269F1E3BC27_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x7E60750)
#define CLASS_3_B1250269F1E3BC27_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x7E60180)
#define CLASS_3_B1250269F1E3BC27__CCTOR_OFFSET UNITYSDK_OFFSET(0x7E604A0)
#define CLASS_3_B1250269F1E3BC27__CTOR_OFFSET UNITYSDK_OFFSET(0x7E60520)

inline static constexpr unsigned int Class_3_B1250269F1E3BC27_TypeDefinitionIndex = 72571;

class Class_3_B1250269F1E3BC27 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_7 = 0x52; // 0x0
	::Class_2_14986121AA61AD99* Field_3_6; // 0x48
	::Il2CppArray<::UnityEngine::Collider*>* Field_3_0; // 0x50
	::System::Collections::Generic::List_1<::Class_3_B1250269F1E3BC27_Struct_2_66EE559EF62DCFBC>* Field_3_3; // 0x58
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_5; // 0x60
	::UnityEngine::LayerMask Field_3_4; // 0x68
	::System::Boolean Field_3_2; // 0x6C
	::System::Boolean Field_3_1; // 0x6D

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B1250269F1E3BC27__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1250269F1E3BC27__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1250269F1E3BC27_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1250269F1E3BC27_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_B1250269F1E3BC27* Method_3_52843B847BEFBCAA()
	{
		return ((::Class_3_B1250269F1E3BC27*(*)())((::PBYTE)hIl2Cpp + CLASS_3_B1250269F1E3BC27_METHOD_3_52843B847BEFBCAA_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1250269F1E3BC27_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
