#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/Box3.h"
#include "unitysdk/Dest/Math/Sphere3.h"
#include "unitysdk/System/Object.h"

class Class_1_1747DAB17F36B4DF;
namespace MoleMole { class SceneSoundObjDataItem; }

#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A61C6B84BD07DE4F_INIT_OFFSET UNITYSDK_OFFSET(0x7F21650)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A61C6B84BD07DE4F_METHOD_1_956051F9F414D412_OFFSET UNITYSDK_OFFSET(0x7F22B60)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A61C6B84BD07DE4F_ONSYNC_OFFSET UNITYSDK_OFFSET(0x7F222B0)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A61C6B84BD07DE4F_POLISH_OFFSET UNITYSDK_OFFSET(0x7F22950)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A61C6B84BD07DE4F_RECYCLE_OFFSET UNITYSDK_OFFSET(0x7F229F0)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A61C6B84BD07DE4F__CTOR_OFFSET UNITYSDK_OFFSET(0x7F22B50)

namespace MoleMole
{
	inline static constexpr unsigned int SceneSoundObjDataItem_Class_1_A61C6B84BD07DE4F_TypeDefinitionIndex = 38814;

	class SceneSoundObjDataItem_Class_1_A61C6B84BD07DE4F : public ::System::Object
	{
	public:
		::MoleMole::SceneSoundObjDataItem* Field_1_0; // 0x10
		::Dest::Math::Box3 Field_1_2; // 0x18
		::Dest::Math::Sphere3 Field_1_3; // 0x54
		::System::UInt32 Field_1_1; // 0x64
		::Dest::Math::Sphere3 Field_1_5; // 0x68
		::Dest::Math::Box3 Field_1_4; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A61C6B84BD07DE4F__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Class_1_1747DAB17F36B4DF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1747DAB17F36B4DF*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A61C6B84BD07DE4F_INIT_OFFSET))(this, a1);
		}

		::System::Void OnSync(::Class_1_1747DAB17F36B4DF* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1747DAB17F36B4DF*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A61C6B84BD07DE4F_ONSYNC_OFFSET))(this, a1, a2);
		}

		::System::Void Polish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A61C6B84BD07DE4F_POLISH_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A61C6B84BD07DE4F_RECYCLE_OFFSET))(this);
		}

		static ::MoleMole::SceneSoundObjDataItem_Class_1_A61C6B84BD07DE4F* Method_1_956051F9F414D412(::MoleMole::SceneSoundObjDataItem* a1)
		{
			return ((::MoleMole::SceneSoundObjDataItem_Class_1_A61C6B84BD07DE4F*(*)(::MoleMole::SceneSoundObjDataItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A61C6B84BD07DE4F_METHOD_1_956051F9F414D412_OFFSET))(a1);
		}
	};
}
