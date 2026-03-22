#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2C434B932ED0B61F;
class Class_1_9BB4AD5956D1660B;
namespace MoleMole { class CameraShotData; }

#define CLASS_1_2C434B932ED0B61F_CLASS_1_A1E9086B4A38FA30_METHOD_1_E530905EC9C5B4AD_OFFSET UNITYSDK_OFFSET(0x6DD7530)
#define CLASS_1_2C434B932ED0B61F_CLASS_1_A1E9086B4A38FA30__CTOR_OFFSET UNITYSDK_OFFSET(0x6DD6E50)

inline static constexpr unsigned int Class_1_2C434B932ED0B61F_Class_1_A1E9086B4A38FA30_TypeDefinitionIndex = 78016;

class Class_1_2C434B932ED0B61F_Class_1_A1E9086B4A38FA30 : public ::System::Object
{
public:
	::Class_1_2C434B932ED0B61F* Field_1_0; // 0x10
	::MoleMole::CameraShotData* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C434B932ED0B61F_CLASS_1_A1E9086B4A38FA30__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E530905EC9C5B4AD(::Class_1_9BB4AD5956D1660B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BB4AD5956D1660B*))((::PBYTE)hIl2Cpp + CLASS_1_2C434B932ED0B61F_CLASS_1_A1E9086B4A38FA30_METHOD_1_E530905EC9C5B4AD_OFFSET))(this, a1);
	}
};
