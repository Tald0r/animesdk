#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_75DAE5F1C70E8A3C_Enum_3_731FB3089889A6AE.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class VideoPlayerMono; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Graphic; }

#define CLASS_1_75DAE5F1C70E8A3C_METHOD_1_1DA89DF9585853CF_OFFSET UNITYSDK_OFFSET(0x7DE0B00)
#define CLASS_1_75DAE5F1C70E8A3C_METHOD_1_1E78778740C9018B_OFFSET UNITYSDK_OFFSET(0x7DE0A50)
#define CLASS_1_75DAE5F1C70E8A3C_METHOD_1_5A0FB19679CA42EC_OFFSET UNITYSDK_OFFSET(0x7DE0520)
#define CLASS_1_75DAE5F1C70E8A3C_METHOD_1_97000D23BFE32EE6_OFFSET UNITYSDK_OFFSET(0x7DE0880)
#define CLASS_1_75DAE5F1C70E8A3C_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x7DE0B60)
#define CLASS_1_75DAE5F1C70E8A3C_METHOD_1_EFE74FD03C1E19A2_OFFSET UNITYSDK_OFFSET(0x7DE0970)
#define CLASS_1_75DAE5F1C70E8A3C_METHOD_1_F37E7430AB382DC3_OFFSET UNITYSDK_OFFSET(0x7DE07A0)
#define CLASS_1_75DAE5F1C70E8A3C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7DE04E0)

inline static constexpr unsigned int Class_1_75DAE5F1C70E8A3C_TypeDefinitionIndex = 75685;

class Class_1_75DAE5F1C70E8A3C : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_75DAE5F1C70E8A3C_TypeDefinitionIndex)->GetStaticField(0xB960);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75DAE5F1C70E8A3C__CCTOR_OFFSET))();
	}

	static ::MoleMole::IVideoPlayer* Method_1_5A0FB19679CA42EC(::MoleMole::VideoPlayerMono* a1, ::Class_1_75DAE5F1C70E8A3C_Enum_3_731FB3089889A6AE a2)
	{
		return ((::MoleMole::IVideoPlayer*(*)(::MoleMole::VideoPlayerMono*, ::Class_1_75DAE5F1C70E8A3C_Enum_3_731FB3089889A6AE))((::PBYTE)hIl2Cpp + CLASS_1_75DAE5F1C70E8A3C_METHOD_1_5A0FB19679CA42EC_OFFSET))(a1, a2);
	}

	static ::MoleMole::IVideoPlayer* Method_1_F37E7430AB382DC3(::UnityEngine::GameObject* a1, ::UnityEngine::UI::Graphic* a2)
	{
		return ((::MoleMole::IVideoPlayer*(*)(::UnityEngine::GameObject*, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + CLASS_1_75DAE5F1C70E8A3C_METHOD_1_F37E7430AB382DC3_OFFSET))(a1, a2);
	}

	static ::MoleMole::IVideoPlayer* Method_1_97000D23BFE32EE6(::MoleMole::VideoPlayerMono* a1)
	{
		return ((::MoleMole::IVideoPlayer*(*)(::MoleMole::VideoPlayerMono*))((::PBYTE)hIl2Cpp + CLASS_1_75DAE5F1C70E8A3C_METHOD_1_97000D23BFE32EE6_OFFSET))(a1);
	}

	static ::MoleMole::IVideoPlayer* Method_1_EFE74FD03C1E19A2(::UnityEngine::GameObject* a1)
	{
		return ((::MoleMole::IVideoPlayer*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_75DAE5F1C70E8A3C_METHOD_1_EFE74FD03C1E19A2_OFFSET))(a1);
	}

	static ::System::Void Method_1_1E78778740C9018B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75DAE5F1C70E8A3C_METHOD_1_1E78778740C9018B_OFFSET))();
	}

	static ::System::Void Method_1_1DA89DF9585853CF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_75DAE5F1C70E8A3C_METHOD_1_1DA89DF9585853CF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_75DAE5F1C70E8A3C_METHOD_1_CE34EA208837238D_OFFSET))();
	}
};
