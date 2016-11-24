#pragma once
#include "learning_method.hpp"

namespace Convolutional::Learning {

	template<typename Classification>
	class Backpropagation : public ILearningMethod<Classification> {
	public:
		using parent_t = ILearningMethod<Classification>;
		using parent_t::ILearningMethod;

		auto BeginEpoch(typename parent_t::networks_t::iterator network) -> void override {}
		auto EvaluateSet(typename parent_t::networks_t::iterator network, typename TrainingData<Classification>::const_iterator set) -> void override {}
		auto EndEpoch(typename parent_t::networks_t::iterator network) -> void override {}
	};

}